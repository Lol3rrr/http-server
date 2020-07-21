build:
	gcc -O3 -o server.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread

build_prometheus:
	gcc -O3 -o server.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread

build_static:
	gcc -O3 -o server.out -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread

build_prometheus_static:
	gcc -O3 -o server.out -DPROMETHEUS -static src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread

build_benchmark:
	gcc -O3 -o benchmark.out benchmarks/*.c benchmarks/*.h benchmarks/*/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread

memcheck:
	gcc -g -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t -c

fuzztesting:
	clang -g -fsanitize=address,undefined,fuzzer src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c fuzzTesting/parseRequest.c -lpthread
	./a.out -jobs=5

memcheck_stats:
	gcc -g -o memcheck.out -DPROMETHEUS src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread
	valgrind --leak-check=full --show-leak-kinds=all ./memcheck.out -p 9090 -t -c

run_profile:
	gcc -g -o profile.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread
	valgrind --tool=callgrind --cache-sim=yes --branch-sim=yes --dump-instr=yes --collect-jumps=yes ./profile.out -p 9090 -t -ic

profile:
	kcachegrind
rm_profile:
	rm -rf *.out.*

run_debug:
	make
	./server.out -p 9090 -d

run_speedTest:
	./test/raw_speedTest.sh | grep "Size\|Max\|Min\|Average"
	./test/template_speedTest.sh | grep "Size\|Max\|Min\|Average"

docker:
	docker build -t c-http-server:latest .


run_test: test.out
	./test.out
	rm test.out

test.out:
	gcc -O3 \
	test/main.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c -lpthread \
	-o test.out

run_bench: bench.out
	./bench.out
	rm bench.out

json: bench.out
	./bench.out --benchmark_format=json | tee benchmark_result.json
	rm bench.out

bench.out: libs/benchmark/build/src/libbenchmark.a
	g++ \
	benchmarks/main.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c \
	-std=c++11 -isystem ./libs/benchmark/include -L./libs/benchmark/build/src -lbenchmark -lpthread \
	-Wno-write-strings \
	-O3 \
	-o bench.out

libs/benchmark/build/src/libbenchmark.a: libs/benchmark/build libs/benchmark/googletest
	cd ./libs/benchmark/build && \
	cmake -DCMAKE_BUILD_TYPE=Release -DBENCHMARK_ENABLE_TESTING=true ../ && \
	make -j

libs/benchmark/build: benchmark
	mkdir -p libs/benchmark/build

benchmark:
	[ -d libs/benchmark ] || git clone --depth=1 --single-branch --branch v1.5.0 https://github.com/google/benchmark.git libs/benchmark

libs/benchmark/googletest: benchmark
	[ -d libs/benchmark/googletest ] || git clone --depth=1 --single-branch --branch release-1.10.0 https://github.com/google/googletest.git libs/benchmark/googletest