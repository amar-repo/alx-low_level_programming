#include <stdio.h>
/**
 * main - Program entry point
 * Return: Program exits here
 */
int main(void)
{
	char num = '0';
	char alph = 'a';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
