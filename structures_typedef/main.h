#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/* Prototype for init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

