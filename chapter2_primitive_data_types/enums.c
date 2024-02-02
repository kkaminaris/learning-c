#include <stdio.h>

int main(int argc, char **argv) {
    enum {new, running, blocked, stopped, exited}status, status1;
    printf("new: %d\n", new);
    printf("running: %d\n", running);
    printf("stopped: %d\n", stopped);
    printf("exited: %d\n", exited);
    printf("blocked: %d\n", blocked);
    status = stopped;
    printf("status = %d\n", status);
    printf("sizeof enum: %lu\n", sizeof(status1));
    printf("sizeof exited: %lu\n", sizeof(exited));
    //status = 6;
    switch (status) {
        case new: 
            printf("status is %d\n", new);
            break;
        case running:
            printf("status is %d\n", running);
            break;
        case blocked:
            printf("status is %d\n", blocked);
            break;
        case stopped:
            printf("status is %d\n", stopped);
            break;
        case exited:
            printf("status is %d\n", exited);
            break;
        default:
            printf("status is not in enum\n");
            break;
    }
    return 0;
}
