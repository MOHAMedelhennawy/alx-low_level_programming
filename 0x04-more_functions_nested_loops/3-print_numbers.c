#include "main.h"

/**
 *print_numbers - print numbers 0-9
 *
 *Return:always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
