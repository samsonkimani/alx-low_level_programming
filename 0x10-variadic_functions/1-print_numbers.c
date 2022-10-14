#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers
 * @separator: string to be printed between numbers
 * @n: the number of integers passed
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n != 0)
	{
		if (separator != NULL)
		{
			for (i = 0; i < n - 1; i++)
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			printf("%d", va_arg(ap, int));
			printf("\n");
		}
	}
}
