#include "main.h"

/**
 * print_diagonal - draws a diagonal line using '\'
 * @n: number of times the character '\' should be printed
 *
 * Description: Prints a diagonal line of '\' n times.
 * If n <= 0, only prints a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* Print leading spaces */
		for (j = 0; j < i; j++)
			_putchar(' ');

		/* Print backslash */
		_putchar('\\');

		/* Print newline */
		_putchar('\n');
	}
}

