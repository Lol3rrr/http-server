build:
	gcc -O3 -o server.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_prometheus:
	gcc -O3 -o server.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_static:
	gcc -O3 -o server.out -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_prometheus_static:
	gcc -O3 -o server.out -DPROMETHEUS -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

memcheck:
	gcc -g -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t -d

memcheck_stats:
	gcc -g -o memcheck.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t

run_profile:
	make
	valgrind --tool=callgrind ./server.out -p 9090
profile:
	kcachegrind

run_test:
	make
	./server.out -p 9090

run_debug:
	make
	./server.out -p 9090 -d

run_speedTest:
	./test.sh | grep "URL\|Max\|Min\|Average"

docker:
	docker build -t c-http-server:latest .
