#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sums of the diagonals
 * @a: the arrays
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum1 = a[0][0];
			sum1 = sum1 + a[i + 1][j];
		}
		break;
	}
	for (i = (size - 1); i >= 0; i--)
	{
		for (j = (size - 1); j >= 0; j--)
		{
			sum2 = a[size - 1][size - 1];
			sum2 = sum2 + a[i - 1][j];
		}
		break;
	}

	printf("%d, %d", sum1, sum2);
}
