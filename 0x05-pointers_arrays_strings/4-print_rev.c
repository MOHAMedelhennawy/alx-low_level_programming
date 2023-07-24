#include "main.h"
#include <string.h>
/**
 * print_rev - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i != -1)
	{
		_putchar(*(s + 1));
		i--;
	}
	_putchar('\n');
}
