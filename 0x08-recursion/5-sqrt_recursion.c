#include "main.h"

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else 
	{
		return sqroot(n, 2);
	}
}
int sqroot(int n , int i)
{
	if(i * i == n)
		return (i);
	else if (i == n / 2)
		return (-1);
	else 
		sqroot(n , i + 1);
	
}
