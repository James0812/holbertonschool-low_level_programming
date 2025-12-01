#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct dlistint_s - structure of a node in a doubly linked list
 * @n: integer stored in the node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
void free_dlistint(dlistint_t *head);
int print_dlistint(const dlistint_t *h);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);

#endif /* LISTS_H */

