gcc *.c -o a.out;
gcc *.c -g -O0 -o webserver.out;
valgrind --leak-check=full ./webserver.out -p 8080;
