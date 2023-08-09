#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat- concatenate 2 strings.
 * @s1: string 1.
 * @s2: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	int sum;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	size1 = strlen(s1);
	size2 = strlen(s2);
	sum = (size1 + size2) + 1;
	ptr = malloc(sizeof(char) * sum);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(ptr + i) = *(s1 + i);
	for (i = size1; i < sum; i++)
		*(ptr + i) = *(s2 + i - size1);

	return (ptr);
}
