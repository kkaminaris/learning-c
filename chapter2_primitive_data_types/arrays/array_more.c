#include <stdio.h>

int main(int argc, char **argv) {
    int numbers[100] = { [0 ... 9] = 2, [10 ... 98] = 0, 69 };
    for (int i=0; i<100; i++) {
            printf("numbers[%d] = %d\n", i, numbers[i]);
        }
    return 0;
}
