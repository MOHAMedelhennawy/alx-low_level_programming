#include "main.h"

void reverse_array(int *a, int n)
{
	int i, end = n - 1;
	int tmp;

	if (n % 2 == 0)
		n = n / 2;
	else 
		n = (n / 2) - 1;

	for (i = 0; i < n / 2; i++ , end--)
	{
		tmp = a[i];
		a[i] = a[end];
		a[end] = tmp;
	}
}
