#include "dog.h"

/**
 * free_dog - frees memory allocated of a struct
 * @d: pointer to the struct to be free
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
