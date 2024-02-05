#include <stdio.h>

int main(int argc, char **argv) {
    char blue[] = "blue";
    printf("blue = %s\n", blue);
    char yellow[] = { 'y', 'e', 'l', 'l', 'o', 'w', '\0' };
    printf("yellow = %s\n", yellow);

    // cannot reassign string
    // this will fail
    //yellow = "red";
    //printf("yellow = %s\n", yellow);
    
    // can however reassign each letter
    yellow[0] = 'b';
    printf("yellow = %s\n", yellow);
    return 0;
}
