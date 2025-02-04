#include <stdio.h>
#include <omp.h>

int main(int argc, char *argv[])
{
    omp_set_num_threads(5);
    int tid;

#pragma omp parallel
    {
        tid = omp_get_thread_num();
        printf("Hello from thread %d\n", tid);
    }

    return 0;
}