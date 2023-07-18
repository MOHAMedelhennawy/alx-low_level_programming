#include "main.h"
/**
 * jack_bauer - prints time table in this format: HH:MM
 * Return: the sum of two numbers.
 */
void jack_bauer(void)
{
	int H = 0;
	int M = 0;

	while (H < 24)
	{
		if (H < 10)
		{
			_putchar('0');
			_putchar(H + '0');
		}
		else
			_putchar(H + '0');
		_putchar(':');
		while (M < 60)
		{
			if (M < 10)
			{
				_putchar('0');
				_putchar(M + '0');
			}
			else
				_putchar(M + '0');
			M++;
		}
		H++;
		_putchar('\n');
	}
}
