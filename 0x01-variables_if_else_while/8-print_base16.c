#include <stdio.h>
/**
 * main - Program entry point
 * Return: Program exits here
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar(num);
	}
	char alph = 'a';

	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
