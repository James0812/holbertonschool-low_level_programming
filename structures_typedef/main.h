#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

/* Structure representing a dog */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Prototype of init_dog function */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */

