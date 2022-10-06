#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array using malloc and initialize to zero
 * @nmemb: number of elements
 * @size: size of each element in the array
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return ('\0');
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
