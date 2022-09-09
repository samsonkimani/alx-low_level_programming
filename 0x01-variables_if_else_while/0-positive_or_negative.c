#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - printing whether n is zero, positive or negative
 *
 * Description: if else statements are used to determine whether
 * the number genereted is zero, positive or negative.
 * The function prints zero if the random number generated is zero
 * and positive if the number is greater than zero
 * otherwise, the program prints negative as the number is less than zero
 *
 * Return: Always (0) success
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
