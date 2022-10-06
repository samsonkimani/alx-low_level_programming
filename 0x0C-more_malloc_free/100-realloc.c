#include "main.h"
#include <stdlib.h>

/**
 * _realloc - realocate memory block
 * @old_size: old size of the memory block
 * @new_size: the new size of the memory block
 * @ptr: pointer
 *
 * Return: pointer to the newly created memery block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
