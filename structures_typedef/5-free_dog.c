#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog to free
 *
 * Description: Frees the name and owner strings, then the dog struct itself.
 * If d is NULL, does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}

