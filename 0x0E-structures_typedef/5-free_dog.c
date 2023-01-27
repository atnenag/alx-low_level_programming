#include "dog.h"
#include <stdlib.h>

/**
 * free_a function that frees dogs.
 * @d: memory address to be freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
