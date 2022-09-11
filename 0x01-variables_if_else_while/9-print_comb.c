#include <stdio.h>
/**
 * main - Program starts here
 * Return: Program exits 0 is successful
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
