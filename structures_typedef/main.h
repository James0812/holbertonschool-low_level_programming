#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Struct dog */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

