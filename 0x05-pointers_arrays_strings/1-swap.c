#include "main.h"
/**
 * swap_int - swap two integers
 * @a: variable a
 * @b: variable b
 * Return: Returns nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
