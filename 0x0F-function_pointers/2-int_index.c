#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: the array
 * @size: of the array
 * @cmp: pointer to function
 *
 * Return: -1 if size <= 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				index1 = i;
				break;
			}
			else
			{
				return (-1);
			}
		}
	}
	else
	{
		return (-1);
	}
}
