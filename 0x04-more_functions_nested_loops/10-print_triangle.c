#include "main.h"
/**
 *print_triangle - print triangle
 *@size:int
 *Return: always 0
 */
void print_triangle(int size)
{
	int i, j;
	int k = size - 1;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (k <= j)
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
		k--;
	}
}
