#include "main.h"

/**
 * print_sign - printing the sign of n
 * @n: the main parameter
 *
 * Description: printing the sign of the value n
 * Return: Always 0 (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
