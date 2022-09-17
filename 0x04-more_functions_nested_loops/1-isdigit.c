#include "main.h"
/**
 * _isdigit - Checks for digit
 *
 * @c: Character to check if digit
 *
 * Return: 1 is success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
