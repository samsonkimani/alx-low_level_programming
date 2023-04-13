#include "search_algos.h"
#include <math.h>

/**
 * jump_search - algorithm to search an array
 * @array: array to search from
 * @size: the size of the array
 * @value: the value to search
 * Return: -1 if the value is not available or the pos if available
 */


int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t min, max;

	if (array == NULL || size == 0)
		return (-1);

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	min = prev - step;
	max = prev < size ? prev : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", min, max);

	while (min <= max)
	{
		printf("Value checked array[%lu] = [%d]\n", min, array[min]);
		if (array[min] == value)
			return (min);
		min++;
	}

	return (-1);
}
