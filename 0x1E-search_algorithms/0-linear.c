#include "search_algos.h"

/**
 * linear_search - a function to search an element linearly
 * @array: the array to search the element from
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index of the element if available in the array
 * else return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
