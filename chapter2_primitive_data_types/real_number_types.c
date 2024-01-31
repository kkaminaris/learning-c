#include <stdio.h>
#include <float.h>

int main(int argc, char** argv) {
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("DBL_MAX: %e\n", DBL_MAX);
    printf("LDBL_MIN: %Le\n", LDBL_MIN);
    printf("LDBL_MAX: %Le\n", LDBL_MAX);
    printf("DBL_MANT_DIG: %d\n", DBL_MANT_DIG);
    double d;
    printf("uninitiated double: %f\n", d);
    double not_exact = 4.2;
    printf("4.2 = %.53f\n", not_exact);
    return 0;
}
