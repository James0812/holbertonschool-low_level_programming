#include <stddef.h>     /* For NULL */
#include "3-calc.h"

/**
 * get_op_func - selects the correct operation function
 * @s: operator as a string
 *
 * Return: pointer to the corresponding function, or NULL if invalid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	return (s && ops[0].op ? ops[0].f : NULL);
}

