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
	int i = 0;
	while (dest[++i] != '\0')
	{}

	i -= 1;
	
	while (*src != '\0')
	{
		dest[++i] = *src;
		src++;
	}
	
	dest[i + 1] = '\0';
}
