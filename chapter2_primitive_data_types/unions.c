#include <stdio.h>

int main(int argc, char **argv) {
    union number {
        int i;
        float f;
    } number1;
    number1.f = 3;
    number1.i = 4;
    // each assignment overrides all other values of the union members
    printf("number1.i = %d\nnumber1.f = %f\n", number1.i, number1.f);
    // size of union is the size of its largest member
    printf("sizeof union: %lu\n", sizeof(number1));
    return 0;
}
