#include "main.h"
/**
 * _isalpha - Checks for alpha character
 * @c: Checks for alphabet
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' || 'A') && (c <= 'z' || 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
