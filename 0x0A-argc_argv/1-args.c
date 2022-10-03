#include <stdio.h>
/**
 * main - prints number of command line arguments passed
 * @argc: number of arguments
 * @argv: pointer to array of arguments
 * Return: Always 0 
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
