#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	L = n %10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (L > 5)
	{
		printf("%d is positive\n", L);
	}
	else (L = 0)
	{
		printf("%d is zero\n", L);
	}
	elseif (L > 5)
	{
		printf("%d is negative\n", L);
	}
	return (0);
}