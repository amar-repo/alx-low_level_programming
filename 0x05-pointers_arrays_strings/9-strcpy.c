#include "main.h"
/**
 * _strcpy - copy paste string
 * @dest: destination
 * @src: source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int let = 0;

	while (*(src + let) != '\0')
	{
		*(dest + let) = *(src + let);
		let++;
	}
	*(dest + let) = '\0';
	return (dest);
}
