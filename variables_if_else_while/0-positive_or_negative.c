#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to n and prints
 *        if it is positive, negative, or zero
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;

	printf("%d is ", n);
	if (n > 0)
		printf("positive\n");
	else if (n == 0)
		printf("zero\n");
	else
		printf("negative\n");

	return (0);
}

