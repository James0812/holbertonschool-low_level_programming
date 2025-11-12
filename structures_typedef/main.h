#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Structure dog */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Prototype of init_dog */
void init_dog(dog_t *d, char *name, float age, char *owner);

#endif /* MAIN_H */

