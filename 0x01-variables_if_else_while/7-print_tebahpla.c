#include <stdio.h>
/**
 * main - program start
 * Return: program end
 */
int main(void)
{
	char hpla = 'z';

	for (hpla = 'z'; hpla >= 'a'; hpla--)
	{
		putchar(hpla);
	}
	putchar('\n');
	return (0);
}
