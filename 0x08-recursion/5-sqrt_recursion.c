#include "main.h"
/**
 * _sqrt_recursion - return the sqrt of a natural number.
 * @n: natural number
 *
 *
 * Return: sqrt 0 if sqrt is not natural.
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);

	else if (n == 1)
		return (1);

	else
		return (sqroot(n, 2));

}
/**
 * sqrt_manual - calculate manualy the sqrt of a number.
 * @n: natural number
 * @i: counter or number to be multiplied.
 *
 * Return: sqrt 0 if sqrt is not natural.
 */
int sqroot(int n, int i)
{
	if (i * i == n)
		return (i);

	else if (i == n / 2)
		return (-1);

	sqroot(n, i + 1);
}
