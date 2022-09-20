#include "main.h"
/**
 * _puts - prints string
 * @str: string
 * Return: returns nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
