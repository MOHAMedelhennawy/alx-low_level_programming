#include "main.h"
/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar(H / 10 + '0');
			_putchar(H % 10 + '0');
			_putchar(':');
			_putchar(M / 10 + '0');
			_putchar(M % 10 + '0');
			_putchar('\n');
		}
	}
}
