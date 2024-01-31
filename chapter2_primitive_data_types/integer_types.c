#include <limits.h>
#include <stdio.h>

int main(int argc, char** argv) {
    printf("Size of signed char: %lu bytes\n", sizeof(signed char));
    printf("Size of unsigned char: %lu bytes\n", sizeof(unsigned char));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of short: %lu bytes\n", sizeof(short));
    printf("Size of unsigned short: %lu bytes\n", sizeof(unsigned short));
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of long: %lu bytes\n", sizeof(long));
    printf("Size of long long: %lu bytes\n", sizeof(long long));
    printf("Max unsigned long long: %llu\n", ULLONG_MAX);
    int i;
    printf("uninitiated int: %d\n", i);
    return 0;
}
