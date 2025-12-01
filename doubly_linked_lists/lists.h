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

/* Add a node at the beginning */
dlistint_t *add_dnodeint(dlistint_t **head, int n);

/* Add a node at the end */
dlistint_t *add_dnodeint_end(dlistint_t **head, int n);

/* Insert a node at a given index */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/* Delete a node at a given index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

/* Free a doubly linked list */
void free_dlistint(dlistint_t *head);

/* Print all elements of a doubly linked list */
int print_dlistint(const dlistint_t *h);

/* Get the nth node of a doubly linked list */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/* Sum of all data in a doubly linked list */
int sum_dlistint(dlistint_t *head);

#endif /* LISTS_H */

