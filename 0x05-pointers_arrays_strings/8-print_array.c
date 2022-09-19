#include "main.h"
#include <string.h>

/**
 * print_array - print array elements
 * @a: the array
 * @n: the size of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (int)strlen(a); i++)
	{
		printf("%d ,", a[i]);
	}
	printf("\n");
}
