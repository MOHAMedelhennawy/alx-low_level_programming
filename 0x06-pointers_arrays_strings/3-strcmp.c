#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
	{}

	if (s1[i] < s2[i])
	{
		flag = s1[i] - s2[i];
	}

	else if (s1[i] > s2[i])
	{
		flag = s1[i] - s2[i];
	}

	return (flag - 2);
}
