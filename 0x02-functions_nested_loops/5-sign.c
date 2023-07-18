#include "main.ih"

/**
 * print_sign - function to check if n = or < or > 0
 * if n = 0 return 0
 * if n < 0 retrun -1
 * if n > 0 retrun 1 
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
