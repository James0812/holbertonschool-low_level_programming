#include "main.h"

/**
 * print_line - draws a straight line using '_'
 * @n: number of times the character '_' should be printed
 *
 * Description: Prints a line of '_' n times followed by a newline.
 * If n <= 0, only prints a newline.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}

