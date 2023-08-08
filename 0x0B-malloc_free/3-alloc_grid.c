#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 *@width: rows of matrix
 *@height: columns of string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
int **alloc_grid(int width, int height)
{
	int **array = (int **)malloc(sizeof(int *) * height);
	int i, j;

	if (array == NULL || width <= 0 || height <= 0)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (!array[i])
		{
			for (i = 0; i < height; i++)	
				free(array + i);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
