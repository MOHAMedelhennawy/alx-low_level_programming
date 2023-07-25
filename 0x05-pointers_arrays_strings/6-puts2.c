#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other char
 *@str: char*
 *Return: void
 */
void puts2(char *str)
{
	int l = strlen(str) / 2;
	char *ch = str + l;
	int i;

	for (i = 0; i < l; i++)
	{
		_putchar(*ch);
		ch++;
	}
}
