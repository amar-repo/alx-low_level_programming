#include "main.h"
/**
 * reverse_array - Reverses array of integers
 * @a: array to be reversed
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, res;

	for (i = n - 1; i > n / 2; i--)
	{
		res = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = res;
	}
}
