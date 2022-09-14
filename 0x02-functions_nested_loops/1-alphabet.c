#include "main.h"
/**
 * main - Program start here
 * Return: Program exits 0
 */
void print_alphabet(void)
{
	char c;

	if (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
