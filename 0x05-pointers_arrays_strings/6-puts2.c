#include "main.h"
#include <string.h>
/**
 *puts2 - prints every other char
 *@str: char*
 *Return: void
 */
void puts2(char *str)
{

	int l = 0, i;

	while (str[i] != '\0')
	i++;

	for (i = 0; i < l; i += 2)
	_putchar(str[i]);

	_putchar('\n');
}
