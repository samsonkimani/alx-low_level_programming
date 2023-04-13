#include "search_algos.h"

/**
 * exponential_search - a searching algorithm to search for a value
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: -1 if the element is not found else the position of the element
 */

int min(int a, int b);
int binarySearch(int *array, int l, int r, int value);

int min(int a, int b)
{
        if (a > b)
                return (b);
        else
                return (a);
}

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		i = i * 2;
	}
	return binarySearch(array, i / 2, min(i , size), value);
}

int binarySearch(int *array, int l, int r, int value)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return binarySearch(array, l, mid  - 1, value);
		return binarySearch(array, mid + 1, r, value);
	}

	return (-1);
}
