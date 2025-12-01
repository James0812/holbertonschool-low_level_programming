#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
void free_dlistint(dlistint_t *head);
int print_dlistint(const dlistint_t *h);

#endif /* LISTS_H */

