#include "main.h"

void reverse_array(int *a, int n)
{
	int i, end = n - 1;
	int tmp;

	for (i = 0; i < n / 2; i++ , end--)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
	}
	return (0);
}
