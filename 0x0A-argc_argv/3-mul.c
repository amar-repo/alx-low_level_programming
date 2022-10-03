#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: pointer to array of arguments passed
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
