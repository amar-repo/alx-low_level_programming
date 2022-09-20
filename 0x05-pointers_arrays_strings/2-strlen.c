#include "main.h"
/**
 * _strlen - Returns length of string
 * @s: string
 * Return: Returns 0
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
