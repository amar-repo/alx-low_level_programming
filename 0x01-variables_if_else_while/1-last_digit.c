#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Program start
 * Return: Program returns 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int rem;

	rem = n % 10;
	if (rem > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, rem);
	}
	if (rem == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, rem);
	}
	if (rem < 6 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, rem);
	}
	return (0);
}
