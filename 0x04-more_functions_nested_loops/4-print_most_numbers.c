#include "main.h"

/**
 *print_most_numbers - print numbers 0-9
 *
 *Return:always 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar('0' + i);
		else
			continue;
	}
	_putchar('\n');

}
