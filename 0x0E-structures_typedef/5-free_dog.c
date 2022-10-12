#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - freee dog
 * @d: the struct
 *
 * Return: always 0
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
