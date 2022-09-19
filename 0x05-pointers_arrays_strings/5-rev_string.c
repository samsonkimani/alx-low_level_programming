#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: main parameter
 */

void rev_string(char *s)
{
	int i;

	for (i = 0; i < strlen(s); i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

	for (i = (strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
