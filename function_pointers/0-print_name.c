#include <stdio.h>          /* For printf */
#include <stddef.h>         /* For NULL */
#include "function_pointers.h"  /* Header file with prototypes */

/**
 * print_name - prints a name using a callback function
 * @name: the name to print
 * @f: pointer to a function that takes a string and returns nothing
 *
 * Description: If 'name' or 'f' is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)  /* Check that pointers are not NULL */
		return;

	f(name);  /* Call the callback function to print the name */
}

