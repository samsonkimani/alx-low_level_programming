#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 * @name: the name
 * @f: pointer to the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
