#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value
 * in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: is the value to search for.
 * Return: return the first index where value is located,
 *	 -1 value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int left = 0, righ = 0;
	int i, steps = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (righ < (int)size && steps < (int)size)
	{
		left = righ;
		righ += steps;
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (value >= array[left] && value <= array[righ])
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, righ);
	if (righ > (int)size - 1)
		righ = size - 1;

	for (i = left; i <= righ; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}

	return (-1);
}
