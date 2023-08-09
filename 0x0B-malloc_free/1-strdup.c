#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup- copy a string.
 * @str: string to be copied.
 *
 *
 * Return: pointer to the copied string.
 */
char *_strdup(char *str)
{
	int size = strlen(str)+ 1, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}
