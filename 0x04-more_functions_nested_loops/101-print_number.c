#include "main.h"
#include <stdio.h>

/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */

void print_number(int n)
{
	int dig, rev = 0, rev2 = 0;

        while (n != 0)
        {
                dig = n % 10;
                rev = (rev * 10) + dig;
                n /= 10;
        }

        while (rev != 0)
        {
                dig = rev % 10;
                rev2 = (rev2 * 10) + dig;
		rev /= 10;
	}
	printf("%d", rev2);
}
