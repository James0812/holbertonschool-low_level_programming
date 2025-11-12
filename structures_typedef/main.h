#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

struct dog
{
    char *name;
    float age;
    char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

