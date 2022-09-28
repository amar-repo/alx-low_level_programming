#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string whose length is to be returned
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s != '\0')
	{
		sum++;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
