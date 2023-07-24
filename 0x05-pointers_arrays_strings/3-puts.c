#include "main.h"
/**
 * _puts - prints an entire string.
 * @str: tested string
 * Return: always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
