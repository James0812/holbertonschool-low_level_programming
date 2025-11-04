#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 * @x: base integer
 * @y: exponent integer
 *
 * Return: x^y
 *         -1 if y < 0 (error)
 *
 * Description: recursively calculates x raised to y.
 * Base case: any number raised to 0 is 1.
 */
int _pow_recursion(int x, int y)
{
	/* Error case: negative exponent */
	if (y < 0)
		return (-1);

	/* Base case: exponent 0 */
	if (y == 0)
		return (1);

	/* Recursive case: multiply x by x^(y-1) */
	return (x * _pow_recursion(x, y - 1));
}

