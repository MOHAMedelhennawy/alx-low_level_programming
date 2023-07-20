#include "main.h"

/**
 *print_line - print lines
 *@n:int
 *Return: always 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
