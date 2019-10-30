build:
	gcc -O3 -o server.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_static:
	gcc -O3 -o server.out -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

memcheck:
	gcc -g -O0 -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 8080 -t

run_test:
	make
	./server.out -p 8080

run_debug:
	make
	./server.out -p 8080 -d

docker:
	docker build -t c-http-server:latest .
