#include <stddef.h>         /* For size_t and NULL */
#include "function_pointers.h"  /* Header with prototypes */

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to a function to apply to each element
 *
 * Description: If 'array' or 'action' is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

