#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding two numbers
 * @argc: size of array
 * @argv: array passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) >= 0 && (atoi(argv[i]) / 2 == 0 || atoi(argv[i]) / 2 == 1))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			return (printf("Error\n"), 1);
		}
	}
	printf("%d\n", sum);
}
