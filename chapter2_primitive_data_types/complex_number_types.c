#include <complex.h>
#include <stdio.h>

int main(int argc, char** argv) {
    // C99 way
    complex double z = 1 + 3*I;
    printf("Real part is %f, Imag part is %f\n", creal(z), cimag(z));
    printf("Phase is %f, modulus is %f\n", carg(z), cabs(z));

    // GNU extensions way
    __complex__ double x = 4 - 3i;
    printf("Real part is %f, Imag part is %f\n", __real__ x, __imag__ x);
    __complex__ int y = 4 - 3i;
    printf("Real part is %d, Imag part is %d\n", __real__ y, __imag__ y);
    return 0;
}
