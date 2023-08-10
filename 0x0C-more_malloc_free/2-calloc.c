#include <stdlib.h>
/**
 * _calloc- initializes memory spaces with zero.
 * @nmemb: string 1.
 * @size: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
