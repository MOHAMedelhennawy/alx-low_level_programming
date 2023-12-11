#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i++] != '\0')
	{}

	i -= 1;
	j = 0;

	for (j = 0; j < n && src[j] != '\0'; j++)
	dest[i++] = src[j];


	dest[i] = '\0';
	return (dest);
}
