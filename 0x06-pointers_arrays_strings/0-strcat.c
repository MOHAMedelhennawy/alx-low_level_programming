#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i++] != '\0')
	{}

	i -= 1;
	j = 0;

	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}

	dest[i] = '\0';
	return (dest);
}
