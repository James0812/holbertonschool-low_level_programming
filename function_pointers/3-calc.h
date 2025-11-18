#ifndef CALC_H
#define CALC_H

#include <stddef.h>  /* For size_t and NULL */

/**
 * struct op - struct to link operator string to its function
 * @op: operator as a string (+, -, *, /, %)
 * @f: pointer to the function that performs the operation
 */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

/* Prototypes for operation functions */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/* Prototype to get correct operation function */
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

