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

	if (n % 2 == 0)
		n = n / 2;
	else
		n = (n / 2) - 1;

	for (i = 0; i <= n; i++, end--)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
	}
}
