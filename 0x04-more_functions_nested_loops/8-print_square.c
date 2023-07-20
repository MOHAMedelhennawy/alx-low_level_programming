#include "main.h"
/**
 * print_square - prints a square followed by new line
 * @size: int
 * Return:always 0
 */

void print_square(int size)
{
	int i, j;
	if (i < 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
