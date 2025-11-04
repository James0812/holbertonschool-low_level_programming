#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: integer whose factorial is calculated
 *
 * Return: factorial of n
 *         -1 if n < 0 (error)
 *
 * Description: Uses recursion to calculate factorial.
 * Base case: factorial of 0 is 1.
 */
int factorial(int n)
{
	/* Error case: negative number */
	if (n < 0)
		return (-1);

	/* Base case: factorial of 0 is 1 */
	if (n == 0)
		return (1);

	/* Recursive case: n * factorial(n - 1) */
	return (n * factorial(n - 1));
}

