#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints array of integers
 * @a: array
 * @n: number of elements
 * Return: Returns nothing
 */
void print_array(int *a, int n)
{
	int let;

	for (let = 0; let < n; let++)
	{
		if (let != n - 1)
		{
			printf("%d, ", a[let]);
		}
		else
		{
			printf("%d", a[let]);
		}
	}
	putchar('\n');
}
