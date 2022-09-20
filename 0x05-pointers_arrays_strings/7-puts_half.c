#include "main.h"
/**
 * puts_half - Prints half of string
 * @str: string
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
