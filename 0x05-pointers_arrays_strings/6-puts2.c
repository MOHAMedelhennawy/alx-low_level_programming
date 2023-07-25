#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other char
 *@str: char*
 *Return: void
 */
void puts2(char *str)
{

	for (; *str != '\0'; str += 2)
	{
		_putchar(*str);
	}
	_putchar('\0');
}
