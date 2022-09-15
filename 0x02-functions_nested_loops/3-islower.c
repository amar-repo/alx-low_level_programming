#include "main.h"
/**
 * _islower - checks for lower case
 *
 * @c: Character to check for lowercase
 *
 * Return: Program exits 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
