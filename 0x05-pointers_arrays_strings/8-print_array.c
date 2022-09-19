#include "main.h"
#include <stdio.h>

/**
 * print_array - print array elements
 * @a: the array
 * @n: the size of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ,", a[i]);
	}
	printf("\n");
}
