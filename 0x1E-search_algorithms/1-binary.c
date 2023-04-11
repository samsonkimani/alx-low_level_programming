#include "search_algos.h"

/**
 * binary_search - a function to search a sorted list using binary search
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the array if available return the index
 * else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i > left)
				printf(", ");
			printf("%ld", i);
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
