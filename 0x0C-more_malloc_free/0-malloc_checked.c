#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: size of the memory
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
	{
		exit(98);
	}
	return (p);
}
