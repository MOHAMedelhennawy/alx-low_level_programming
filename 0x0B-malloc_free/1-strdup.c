#include "main.h"
#include <stdlib.h>
/**
 * _strdup- copy a string.
 * @str: string to be copied.
 *
 *
 * Return: pointer to the copied string.
 */
char *_strdup(char *str)
{
	char *ptr = (char *)malloc(sizeof(char));
	int i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		*(ptr + i) = str[i];
	}
	return (ptr);
}