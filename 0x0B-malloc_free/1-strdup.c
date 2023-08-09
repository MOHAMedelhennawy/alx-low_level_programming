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
	int size = 0, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (*(str + size))
		size++;
	size++;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}
