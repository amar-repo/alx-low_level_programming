#include "main.h"
/**
 * more_numbers - Prints from 1 to 14 10x
 *
 * Return: Returns nothing
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
