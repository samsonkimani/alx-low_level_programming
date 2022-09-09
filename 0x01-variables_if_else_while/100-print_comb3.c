#include <stdio.h>

/**
 * main - printing all th combinations of a two digit numbers without
 * repetition 01 and 10 are considered a repetition
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				continue;
			}

			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
	return (0);
}
