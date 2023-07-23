#include <stdio.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main() 
{
	write(1, "and that piece of art is useful", 31);
	write(1, " - Dora Korpar, 2015-10-19\n", 27);


	return 0;
}
