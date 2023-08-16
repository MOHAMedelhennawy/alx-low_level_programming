#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - ot input the index
 * @array: pointer to array
 * @size: size of array
 * @cmp: function pointer
 * Return: index of matching number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}


	return (-1);
}
