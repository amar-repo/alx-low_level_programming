#include "main.h"
/**
 * print_numbers(void) - Prints from 0 t0 9
 *
 * Return: Always 0
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
