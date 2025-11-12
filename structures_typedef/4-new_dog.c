#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_copy = NULL;
	char *owner_copy = NULL;
	int i, len;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	/* copy name manually */
	if (name)
	{
		for (len = 0; name[len]; len++)
			;
		name_copy = malloc(len + 1);
		if (!name_copy)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			name_copy[i] = name[i];
	}

	/* copy owner manually */
	if (owner)
	{
		for (len = 0; owner[len]; len++)
			;
		owner_copy = malloc(len + 1);
		if (!owner_copy)
		{
			free(name_copy);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len; i++)
			owner_copy[i] = owner[i];
	}

	d->name = name_copy;
	d->age = age;
	d->owner = owner_copy;

	return (d);
}

