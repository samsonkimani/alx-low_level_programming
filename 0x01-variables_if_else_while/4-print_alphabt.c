#include <stdio.h>

/**
 * main - print all letters of the alphabet except e and q
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
