#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Find the length of the string */
	while (str[length] != '\0')
		length++;

	/* Determine the starting point */
	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2 + 1;

	/* Print from the middle to the end */
	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}

