#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that takes first two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, multi = 1;

	for (i = 1; i < argc; i++)
		multi *= atoi(argv[i]);

	printf("%d\n", multi);
	return (0);
}
