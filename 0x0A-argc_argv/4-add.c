#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: size of the array
 * @argv: the array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		return (printf("0\n"));
	}

	for (i =1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			return (printf("Error\n"), 1);
		}
	}
	return (printf("%d\n", sum));
}

