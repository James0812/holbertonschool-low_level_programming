#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Structure dog */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype de init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

