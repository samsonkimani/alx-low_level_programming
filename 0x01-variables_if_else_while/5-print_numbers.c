#include <stdio.h>

/**
 * main - print all single digit numbers up to 9
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
