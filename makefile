build:
	gcc -o server.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_stats:
	gcc -o server.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_static:
	gcc -o server.out -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

memcheck:
	gcc -g -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t

memcheck_stats:
	gcc -g -o memcheck.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t

run_test:
	make
	./server.out -p 9090

run_debug:
	make
	./server.out -p 9090 -d

docker:
	docker build -t c-http-server:latest .
