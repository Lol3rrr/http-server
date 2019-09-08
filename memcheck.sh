make memcheck;
valgrind --leak-check=full ./memcheck.out -p 8080 -t;
