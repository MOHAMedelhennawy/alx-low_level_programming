#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int i, end = n -1;
	int tmp;

	for (i = 0; i < end; i++, end--)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
	}
}
