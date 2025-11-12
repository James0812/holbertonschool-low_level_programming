#include "main.h"

/* Function to initialize a dog struct */
void init_dog(dog_t *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;
    d->name = name;
    d->age = age;
    d->owner = owner;
}

