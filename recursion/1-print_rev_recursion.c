#include "main.h"
#include <unistd.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to the string to print
 *
 * Description: prints each character recursively starting from the end.
 * The function uses recursion to reach the last character first.
 */
void _print_rev_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
		return;

	/* Recursive call for the next character */
	_print_rev_recursion(s + 1);

	/* Print the current character after recursion */
	write(1, s, 1);
}

