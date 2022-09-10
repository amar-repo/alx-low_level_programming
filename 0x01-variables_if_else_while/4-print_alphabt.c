#include <stdio.h>
/**
 * main - program starts here
 * Return: returns 0 if successful
 */
int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e')
		{
			alpha = alpha + 1;
		}
		if (alpha == 'q')
		{
			alpha = alpha +1;
		}
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}

