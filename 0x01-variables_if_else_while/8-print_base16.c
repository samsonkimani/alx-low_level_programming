#include <stdio.h>

/**
 * main - printing all hexadecimal numbers
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
