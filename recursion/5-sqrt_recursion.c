#include "main.h"

/**
 * _sqrt_helper - helper function to find square root recursively
 * @n: number to find the square root of
 * @guess: current guess for square root
 *
 * Return: square root if it exists, -1 otherwise
 */
static int _sqrt_helper(int n, int guess)
{
	/* If square is greater than n, no natural square root exists */
	if (guess * guess > n)
		return (-1);

	/* If square matches n, we found the square root */
	if (guess * guess == n)
		return (guess);

	/* Recursive case: try next guess */
	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find the square root of
 *
 * Return: natural square root of n
 *         -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

