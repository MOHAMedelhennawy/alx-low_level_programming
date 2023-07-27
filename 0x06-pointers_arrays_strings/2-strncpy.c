#include "main.h"
/**
 * _strncpy - concatenate strings, defining the size of second string.
 * @dest: string with concatenation
 * @src: string to be concatenated
 * @n: size of second string
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;

	while (++i < n && src[i] != '\0')
		dest[i] = src[i];

	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
