#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: main parameter
 */

void rev_string(char *s)
{
	int i, left, temp;

	left = 0;
	i = 0;

	while (s[i] != '0')
	{
		i++;
	}
	i--;

	while (i > left)
	{
		temp = s[i];
		s[i--] = s[left];
		s[left++] = temp;
	}
}
