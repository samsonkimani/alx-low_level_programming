#include "search_algos.h"
#include<math.h>
#include <stdio.h>

/**
 * jump_search - function to search for an element using the jumpsearch algo
 * @array: the array to search the data from
 * @size: the size of the array
 * @value: the value to search
 * Return: -1 if value not found else the position of the element in the array
 *
 */
int min_number(int a, int b);

int min_number(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0;
	size_t prev = 0;

	while (array[min_number((int)step, (int)size) - 1] < value)
	{

		printf("Value checked array[%ld] = [%d]", step, array[step]);
		printf("\n");
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]", prev, step);
	printf("\n");
	/* performing a linear search */
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]", prev, array[prev]);
		printf("\n");
		prev++;

		if (prev == (size_t)min_number((int)step, (int)size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
