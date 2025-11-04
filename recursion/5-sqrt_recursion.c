#include "main.h"

/**
 * _sqrt_helper - helper function to find natural square root recursively
 * @n: number to find the square root of
 * @guess: current guess
 *
 * Return: square root if exists, -1 otherwise
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
		return (-1);

	if (guess * guess == n)
		return (guess);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: number to find the square root of
 *
 * Return: natural square root of n
 *         -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}

