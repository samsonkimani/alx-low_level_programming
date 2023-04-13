#include "search_algos.h"

/**
 * interpolation_search - an algorithm to search for an element in an array
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the position of the value in the array
 * else return -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = (int)size - 1;
	size_t mid;

	while ((array[high] != array[low]) && (value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	else
		return (-1);
}
