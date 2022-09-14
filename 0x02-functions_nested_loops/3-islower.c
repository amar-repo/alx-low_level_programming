#include "main.h"
/**
 * _islower - checks for lower case
 *
 * @c: Character to check for lowercase
 *
 * Return: Program exits 0
 */
int _islower(int c)
{
	int a;

	a = _islower('D');
	_putchar(a + '0');
	a = _islower('g');
	_putchar(a + '0');
	_putchar('\n');
	return (0);
}
