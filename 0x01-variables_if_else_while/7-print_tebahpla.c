#include <stdio.h>

/**
 * main - printing alphabets in reverse order
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
