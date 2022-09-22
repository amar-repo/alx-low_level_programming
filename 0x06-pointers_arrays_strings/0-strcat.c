#include "main.h"
/**
 * _strcat - concatenates two strings
 *
 * @dest: 1st string
 * @src: 2nd string
 * Return: Returns concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return (dest);
}
