#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees the memory allocated for a dog_t structure.
 * @d: A pointer to the dog_t structure to be freed.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);
		free(d);
	}
}
