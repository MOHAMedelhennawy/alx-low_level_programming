#include "main.h"
/**
 * _strcmp - compare 2 strings.
 * @s1: string to be compared.
 * @s2: string for comparation.
 * Return: Difference.
 */
int _strcmp(char *s1, char *s2)
{
	int i = -1;

	while((s1[++i] != '\0' && s2[i] != '\0') && s1[i] == s2[i])
	{}

	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] != s2[i] ? (s1[i] - s2[i]) : (s1[i] - s2[i]));
}
