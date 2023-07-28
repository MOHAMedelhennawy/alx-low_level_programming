#include "main.h"
#include <stdio.h>
/**
 * _atoi - print the integer of a char.
 * @s:  tested char
 * Return: integer.
 */
int _atoi(char *s)
{
	int i, arr[50], j = 0, count = 0, sum = 0;

	for (i = 0; i < s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			arr[j] = s[i] - '0';
			j++;
		}

		if (s[i] == '-')
			count++;
	}


	for (i = 0; i < j; i++)
	{
		sum = sum + arr[i];
		sum *= 10;
	}

	if (count % 2 != 0)
		printf("-");

	return (sum / 10);
}
