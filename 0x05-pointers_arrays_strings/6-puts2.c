#include "main.h"
#include <string.h>

/**
 * puts2 - printing every other cahracters
 * @str: main parameter
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
