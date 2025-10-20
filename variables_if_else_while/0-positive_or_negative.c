#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    /* Do not modify these lines */
    srand(time(NULL));
    n = rand() - RAND_MAX / 2;

    /* Your code starts here */
    printf("%d is ", n);

    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");

    return 0;
}

