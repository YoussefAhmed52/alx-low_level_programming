#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog
 * @d: your dog
 *
 * Return: coid.
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
