prog:
	gcc -o a.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c

memcheck:
	gcc -g -O0 -o memcheck.out src/*.c src/webserver/*.h src/webserver/*/*.h src/webserver/*/*.c
