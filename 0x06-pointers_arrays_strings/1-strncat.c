#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes
 * Return: Returns concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, ptr = 0;

	while (dest[i++])
	{
		ptr++;
	}
	for (i = 0; src[i] && i < n ; i++)
	{
		dest[ptr++] = src[i];
	}
	return (dest);
}
