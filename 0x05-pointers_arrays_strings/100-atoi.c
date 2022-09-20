#include "main.h"
#include <stdlib.h>

/**
 * _atoi - converting string to numbers
 * @s: main parameter
 *
 * Return: an integer
 */

int _atoi(char *s)
{
	int i, j, n, m;

	i = n = 0;
	m = 1;

	while ((*(s + 0) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
		{
			m *= -1;
		}
		i++;
	}
	j = i;

	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		n = n * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (n);
}
