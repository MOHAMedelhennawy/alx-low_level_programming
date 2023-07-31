#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: source string
 * @accept: searching string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, flag;
	unsigned int count = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag = 0;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
				flag = 1;
			}
		}
		if (flag == 0)
			break;
	}

	return (count);
}
