#include <stdio.h>
/**
 * main - Program starts here
 * Return: Program exits 0 is successful
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 8; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{
			putchar(a + '0');
			putchar(b + '0');
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
