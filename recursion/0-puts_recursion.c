#include "main.h"
#include <unistd.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer to the string to print
 *
 * Description: prints each character recursively using write().
 * The function stops at the null terminator and prints '\n'.
 */
void _puts_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}

	/* Print the current character */
	write(1, s, 1);

	/* Recursive call for the next character */
	_puts_recursion(s + 1);
}

