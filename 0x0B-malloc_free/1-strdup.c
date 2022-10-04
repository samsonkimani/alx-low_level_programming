#include "main.h"
#include <string.h>

/**
 * _strdup - return a pointer to the newly allocated memory
 * containing a copy of the string
 * @str: the strint to copy
 *
 * Return: pointer to copy
 */

char *_strdup(char *str)
{
	char *s = malloc(sizeof(char) * strlen(str));
	int i = 0;

	if (str == 0 || s == NULL)
	{
		return (NULL);
	}

	while (str[i] != '/0')
	{
		s[i] = str[i];
		i++;
	}
	return (s);
}