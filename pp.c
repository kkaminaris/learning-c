#include <bits/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>
#include <sys/mman.h>

#define N_OF_LOOPS 10000000000
#define N_OF_PROCS 3

int main(int argc, char **argv) {

    struct timespec startTime, endTime;
    double count = 0;

    clock_gettime(CLOCK_MONOTONIC, &startTime);

    /* Do work */
    pid_t pid[N_OF_PROCS+1];
    for (int i=0; i<N_OF_PROCS; i++) {
        pid[i] = fork();
        if (pid[i] == 0) {
            for (; count < N_OF_LOOPS/(N_OF_PROCS + 1); count++) {}
            exit(0);
        }
    }
    for (; count < N_OF_LOOPS/(N_OF_PROCS + 1); count++) {}
    for (int i=0; i<N_OF_PROCS; i++) {
        wait(NULL);
    }

    clock_gettime(CLOCK_MONOTONIC, &endTime);

    // calculate elapsed time                                                       
    int secs = endTime.tv_sec - startTime.tv_sec;                             
    int ms = (endTime.tv_nsec - startTime.tv_nsec)/1000;                      
    double res = (double)(secs + (double)ms/1000000);                               
    double elapsed_time = res;                                                          

    printf("time = %f\n", elapsed_time);
    printf("gflops = %f\n", N_OF_LOOPS/elapsed_time/1000000000);
}
