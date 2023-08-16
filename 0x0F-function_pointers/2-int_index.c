#include <stdio.h>
#include "function_pointers.h"
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
			break;
		}
	}

	if (i == size || size <= 0)
	return (-1);
	return (0);
}
