#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the number of arguments in the program.
 * @argc: argument count or size of arguments.
 * @argv: argument vector
 *
 * Return: always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
