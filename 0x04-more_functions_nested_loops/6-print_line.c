#include "main.h"
/**
 * print_line - Prints line on terminal
 * @n: number of times character is printed
 *
 * Return: Returns nothing
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
