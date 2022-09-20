#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to be reversed
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
