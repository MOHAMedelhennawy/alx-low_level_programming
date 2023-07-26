#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int i, end = n - 1;
	int tmp;

	for (i = 0; i < n / 2; i++, end--)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
