#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * copy_string - allocates memory and copies a string manually
 * @str: string to copy
 *
 * Return: pointer to the new string, or NULL on failure
 */
static char *copy_string(char *str)
{
	int i, len;
	char *new_str;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new_str = malloc(len + 1);
	if (!new_str)
		return (NULL);

	for (i = 0; i <= len; i++)
		new_str[i] = str[i];

	return (new_str);
}

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

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = copy_string(name);
	d->owner = copy_string(owner);
	if ((name && !d->name) || (owner && !d->owner))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

