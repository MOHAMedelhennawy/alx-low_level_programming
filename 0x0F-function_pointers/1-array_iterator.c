#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function to print element of array
 * @array: passed array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
