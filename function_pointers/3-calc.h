#ifndef CALC_H
#define CALC_H

#include <stddef.h>  /* For size_t and NULL */

/* Struct to link operator string to function */
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

