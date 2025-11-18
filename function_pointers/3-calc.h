#ifndef CALC_H
#define CALC_H

#include <stddef.h>  /* For size_t and NULL */

/* Struct for operator and corresponding function */
typedef struct op
{
	char *op;
	int (*f)(int, int);
} op_t;

/* Prototypes */
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

