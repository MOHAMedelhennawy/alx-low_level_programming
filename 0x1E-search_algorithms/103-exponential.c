#include "search_algos.h"
/**
 * _binary_search - function that searches for a value
 * in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: is the value to search for.
 * @l: the value of low.
 * Return: return the first index where value is located,
 *       -1 value is not present in array or if array is NULL
 */

int _binary_search(int *array, size_t size, int l, int value)
{
	int i, middle, middle_value;
	int low = l, hight = size - 1;

	if (!array || 0 == size)
		return (-1);

	while (low <= hight)
	{
		middle = (low + hight) / 2;
		middle_value = array[middle];

		printf("Searching in array: ");
		for (i = low; i <= hight; i++)
		{
			if (i != hight)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (middle_value < value)
			low = middle + 1;
		else if (middle_value >  value)
			hight = middle - 1;
		else
			return (middle);
	}

	return (-1);
}

/**
 * exponential_search - function that searches for a value
 * in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: is the value to search for.
 * Return: return the first index where value is located,
 *	 -1 value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	i = i > size - 1 ? size : i + 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, i - 1);
	return (_binary_search(array, i, i / 2, value));
}
