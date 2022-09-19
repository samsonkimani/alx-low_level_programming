#include "main.h"

/**
 * swap_int - swapping two numbers
 * @a: first integer
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int i;

	int *p = &i;

	*p = a;
	*a = b;
	*b = p;
}
