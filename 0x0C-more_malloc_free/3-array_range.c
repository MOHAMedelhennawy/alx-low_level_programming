#include <stdlib.h>
/**
 * array_range - initializes memory spaces with zero.
 * @min: string 1.
 * @max: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++, min++)
		*(ptr + i) = min;

	return (ptr);
}
