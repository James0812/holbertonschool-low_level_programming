#ifndef DLISTINT_H
#define DLISTINT_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Function prototypes for doubly linked list */
size_t dlistint_len(const dlistint_t *h);
size_t print_dlistint(const dlistint_t *h);

#endif

