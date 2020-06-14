#include "../server.h"

static tpool_work_t* tpool_work_create(int con) {
  tpool_work_t* work;

  if (con < 0)
    return NULL;

  work = (tpool_work_t*) malloc(sizeof(tpool_work_t));
  work->connection = con;
  work->next = NULL;
  
  return work;
}

static void tpool_work_destroy(tpool_work_t* work) {
  if (work == NULL)
    return;

  free(work);
}

static tpool_work_t* getWork(tpool_t* tp) {
  tpool_work_t* work;
  
  if (tp == NULL)
    return NULL;

  work = tp->work_first;
  if (work == NULL)
    return NULL;

  if (work->next == NULL) {
    tp->work_first = NULL;
    tp->work_last = NULL;
  } else {
    tp->work_first = work->next;
  }

  return work;
}

static void* threadFuncion(void* arg) {
  tpool_t* tp = (tpool_t*) arg;
  tpool_work_t* work;

  request tmpReq = createEmptyRequest();
  response tmpResp = createEmptyResponse();

  for(;;) {
    pthread_mutex_lock(&(tp->work_mutex));

    while(tp->work_first == NULL)
      pthread_cond_wait(&(tp->work_cond), &(tp->work_mutex));

    work = getWork(tp);
    pthread_mutex_unlock(&(tp->work_mutex));

    if (work == NULL) {
      continue;
    }

    // Actually handle the work
    handleConnection(work->connection, &tmpReq, &tmpResp, tp->fManager);
    int worked = close(work->connection);
    if (worked < 0) {
      logError("Closing connection \n");
    }

    // Reset the request/response for another use
    resetRequest(&tmpReq);
    resetResponse(&tmpResp);
  }

  return NULL;
}

tpool_t* createThreadPool(size_t num, fileManager_t* fManager) {
  tpool_t* tp;
  pthread_t thread;

  tp = (tpool_t*) calloc(1, sizeof(tpool_t));
  tp->thread_cnt = num;
  tp->fManager = fManager;

  pthread_mutex_init(&(tp->work_mutex), NULL);
  pthread_cond_init(&(tp->work_cond), NULL);

  tp->work_first = NULL;
  tp->work_last = NULL;

  for (int i = 0; i < num; i++) {
    pthread_create(&thread, NULL, threadFuncion, tp);
    pthread_detach(thread);
  }

  return tp;
}

int tpool_addWork(tpool_t* tp, int con) {
  tpool_work_t* work;

  work = tpool_work_create(con);
  if (work == NULL)
    return 0;

  pthread_mutex_lock(&(tp->work_mutex));
  if (tp->work_first == NULL) {
    tp->work_first = work;
    tp->work_last = tp->work_first;
  } else {
    tp->work_last->next = work;
    tp->work_last = work;
  }

  pthread_cond_broadcast(&(tp->work_cond));
  pthread_mutex_unlock(&(tp->work_mutex));

  return 1;
}
