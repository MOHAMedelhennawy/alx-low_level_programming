#include "main.h"
/**
 * times_table - prints the times table from 0 - 9.
 *
 * Return: Nothing.
*/
void print_times_table(int n)
{
	int r, c, v;

	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			v = r * c;
			if (c != 9)
			{
				if (v >= 10)
				{
					_putchar(v / 10 + '0');
					_putchar(v % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
				else if (v < 10)
				{
					if (v < 10 && r * (c + 1) >= 10)
					{
						_putchar(v + '0');
						_putchar(',');
						_putchar(' ');
					}
					else
					{
						_putchar(v + '0');
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			else
			{
				if (v >= 10)
				{
					_putchar(v / 10 + '0');
					_putchar(v % 10 + '0');
				}
				else
					_putchar(v + '0');
			}
		}
		_putchar('\n');
	}
}
