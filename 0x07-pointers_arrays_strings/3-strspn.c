#include "main.h"
#include <stdio.h>

/**
 * _strspn - getting the length of a prefix substring
 * @s: the strin
 * @accept: substring
 *
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
