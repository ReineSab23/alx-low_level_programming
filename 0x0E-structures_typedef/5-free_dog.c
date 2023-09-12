#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees your dawgs
 * @d: yo change
 *
 * Return: void
*/
void free-dog(dog_t *d)
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
