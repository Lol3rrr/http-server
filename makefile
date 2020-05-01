build:
	gcc -O3 -o server.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_prometheus:
	gcc -O3 -o server.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_static:
	gcc -O3 -o server.out -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_prometheus_static:
	gcc -O3 -o server.out -DPROMETHEUS -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_benchmark:
	gcc -O3 -o benchmark.out benchmarks/*.c benchmarks/*.h benchmarks/*/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

build_profile_benchmark:
	gcc -g -o benchmark.out benchmarks/*.c benchmarks/*.h benchmarks/*/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

memcheck:
	gcc -g -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t -c

fuzztesting:
	clang -g -fsanitize=address,undefined,fuzzer src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c fuzzTesting/parseRequest.c
	./a.out -jobs=5

memcheck_stats:
	gcc -g -o memcheck.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t -c

run_profile:
	gcc -g -o profile.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
	valgrind --tool=callgrind --cache-sim=yes --branch-sim=yes --dump-instr=yes --collect-jumps=yes ./profile.out -p 9090
profile:
	kcachegrind
rm_profile:
	rm -rf *.out.*

run_test:
	make
	./server.out -p 9090

run_debug:
	make
	./server.out -p 9090 -d

run_speedTest:
	./test/raw_speedTest.sh | grep "Size\|Max\|Min\|Average"
	./test/template_speedTest.sh | grep "Size\|Max\|Min\|Average"

run_benchmark:
	make build_benchmark
	./benchmark.out

run_profile_benchmark:
	make build_profile_benchmark
	valgrind --tool=callgrind --cache-sim=yes --branch-sim=yes --dump-instr=yes --collect-jumps=yes ./benchmark.out

docker:
	docker build -t c-http-server:latest .
