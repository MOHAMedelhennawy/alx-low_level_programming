#include "main.h"
#include <stdio.h>
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	int count = 0, sign = 1, n = 0, i = 0;

	while (s[i] != '\0')
		if (s[i] == '-')
			count++;

	if (count % 2 != 0)
		sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + (s[i] - '0');
		if (s[i] >= '0' && s[i] <= '9' && (s[i + 1] < '0' || s[i + 1] > '9'))
			break;
	}

	return (sign * n);
}
