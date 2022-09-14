#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10x
 *
 * Return: Program returns 0 if success
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
