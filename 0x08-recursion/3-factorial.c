#include "main.h"
/**
 * factorial - prints factorial of a number
 * @n: number whose facorial is to be calculated
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
