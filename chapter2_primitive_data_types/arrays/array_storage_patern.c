#include <stdio.h>

int main(int argc, char **argv) {

    int two_d_array[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };

    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("array[%d][%d] = %d\n", i, j, two_d_array[i][j]);
            printf("array[%d][%d] adress = %p\n", i, j, &two_d_array[i][j]);
        }
    }

    return 0;

}
