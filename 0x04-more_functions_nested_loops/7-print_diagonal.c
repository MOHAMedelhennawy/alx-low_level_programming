#include "main.h"
/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		else
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar(92);
			}
		}
		_putchar('\n');
	}

}
