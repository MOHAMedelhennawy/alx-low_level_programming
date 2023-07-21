#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 *
 */

void print_number(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (num / 10 > 0)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
