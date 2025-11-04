#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 *
 * Description: counts characters recursively until the null
 * terminator '\0' is reached.
 */
int _strlen_recursion(char *s)
{
	/* Base case: end of string */
	if (*s == '\0')
		return (0);

	/* Recursive case: 1 + length of the rest of the string */
	return (1 + _strlen_recursion(s + 1));
}

