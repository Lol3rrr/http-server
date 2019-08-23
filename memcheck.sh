gcc src/*.c -o a.out;
gcc src/*.c -g -O0 -o memcheck.out;
valgrind --leak-check=full ./memcheck.out -p 8080;
