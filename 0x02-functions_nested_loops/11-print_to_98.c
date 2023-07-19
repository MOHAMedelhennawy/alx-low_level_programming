#include "main.h"

void print_to_98(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i >= 98; i--)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
