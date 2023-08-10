#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of new memory array.
 *
 *
 * Return: the string initialized.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
