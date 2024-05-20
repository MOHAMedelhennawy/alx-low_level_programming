#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - function that searches for a value in a sorted array of integers.
 * @array: a pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: is the value to search for.
 * Return: return the first index where value is located,
 *	 -1 value is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int index = 0, i;
	int low = 0, hight = size - 1;
	
	if (!array)
		return (-1);

	while (hight > low)
	{
		int middle = low + (hight - low) / 2;
		int middle_value = array[middle];

		printf("Searching in array: ");
                for (i = low; i <= hight; i++)
                {
			if (i != hight)
                        	printf("%d ", array[i]);
			else
				printf("%d\n", array[i]);
                }

		if (middle_value < value) low = middle + 1;
		else if (middle_value >  value) hight = middle - 1;
		else return index;
		
		index++;
	}
	return (-1);
}	
