#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other char
 *@str: char*
 *Return: void
 */
void puts2(char *str)
{
	int l = strlen(str) - 1;
	int i;
	char *ch;

	for (i = 0; i < l; i += 2)
	{
		ch = str[i];
		_putchar(*ch);
	}
}
