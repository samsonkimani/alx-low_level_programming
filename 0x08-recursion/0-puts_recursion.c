#include "main.h"

/**
 * _puts_recursion - prints a sentence
 * @s: the main variable
 *
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
