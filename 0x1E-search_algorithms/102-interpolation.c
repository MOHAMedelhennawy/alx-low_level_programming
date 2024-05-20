#include "search_algos.h"
/**
 * interpolation_search - function that searches for a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: is the value to search for.
 * Return: return the first index where value is located,
 *       -1 value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int low = 0, high = size - 1;

	if (!array)
		return (-1);

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value) return pos;
		else if (array[pos] < value) low = pos + 1;
		else high = pos - 1;
	}

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
