#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - change the memory space of an array.
 * @ptr: pointer to old array.
 * @old_size: the size of ptr
 * @new_size: new size of array
 * Return: pointer to the new array.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr1, *ptr2 = ptr;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*(ptr1 + i) = *(ptr2 + i);

	free(ptr);
	return (ptr1);
}
