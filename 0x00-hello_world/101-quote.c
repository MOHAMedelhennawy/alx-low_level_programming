#include <stdio.h>
/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *                followed by a new line, to standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	while (!printf ( "and that piece of art is useful" ) )
	{ }

	while(!printf (" - Dora Korpar, 2015-10-19") )
	{ }
	
	while(!printf ("\n") )
	{ }

	return (0);
}
