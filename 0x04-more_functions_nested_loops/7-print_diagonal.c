#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n - number of times \ is printed
 * Return: Returns nothing
 */
void print_diagonal(int n)
{
	in slash, gap;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (gap = 0; gap < slash; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (slash == (n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
