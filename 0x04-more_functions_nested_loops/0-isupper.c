#include "main.h"
/**
 * _isupper - Checks for uppercase character
 *
 * Return: 1 if upper, 0 if lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
