#include "main.h"

/**
 * print_alphabet - printing all the lowercase letters of the alphabet
 */


void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}

/**
 * main - calling the print_alphabet function
 *
 * Return: Always 0 (success);
 */

int main(void)
{
	print_alphabet();
	return (0);
}
