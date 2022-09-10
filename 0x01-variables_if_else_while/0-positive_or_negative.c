#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program starts here
 *
 * Return: program exits with 0 if successful
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("n is positive\n");
	}
	else if (n == 0)
	{
		printf("n is 0\n");
	}
	else
	{
		printf("n is negative\n");
	return (0);
}
