#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: string
 * Return: Returns nothing
 */
void rev_string(char *s)
{
	int i, c, len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = c;
	}
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
