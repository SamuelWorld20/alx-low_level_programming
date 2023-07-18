#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - it frees dogs.
 * @d: parameter that holds pointer to dog
 *
 * Return: Void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
