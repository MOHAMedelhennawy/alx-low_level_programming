#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all arguments of the program separated by new line.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
