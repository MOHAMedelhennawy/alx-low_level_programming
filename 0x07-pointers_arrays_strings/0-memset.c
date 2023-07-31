#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */
char *_memset(char *s, char b, unsigned int n)
{

	while (n-- != 0)
	*s = b;

	return (s);
}
