#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: main parameter
 */

void rev_string(char *s)
{
	chat *t = s;
	char n[1000];
	short c = 0;

	while (*s != '\0')
	{
		n[c] = *s;
		s++;
		c++;
	}
	c = 0;
	while (s > t)
	{
		s--;
		*s = n[c];
		c++;
	}
}
