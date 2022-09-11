#include <stdio.h>
/**
 * main - starts here
 * Return: ends here
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
