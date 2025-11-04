#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string to print
 *
 * Description: This function prints each character of the string `s`
 * recursively. When it reaches the end ('\0'), it prints a newline.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}

