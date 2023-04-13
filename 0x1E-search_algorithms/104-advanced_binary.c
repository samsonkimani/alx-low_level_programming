#include "search_algos.h"

int binarySearch(int *array, int l, int r, int value);
int advanced_binary(int *array, size_t size, int value)
{
	return (binarySearch(array, 0, size - 1, value));
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

