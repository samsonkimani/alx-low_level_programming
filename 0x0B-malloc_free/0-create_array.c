#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating an array and initializing it with a
 * special character
 * @size: the size of the array
 * @c: special character
 * Return: a character to the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(sizeof(char) * size);
	if (s == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
