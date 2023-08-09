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
	if (str == NULL)
		return (NULL);

	int size = strlen(str), i;
	char *ptr = (char *)malloc(sizeof(char) * size);

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = *(str + i);
	}
	return (ptr);
}
