#include "main.h"
/**
 * _strlen - to get size of string
 * @ptr: pointer to first digit in string
 * Return: size of string
 */
int _strlen(const char *ptr)
{
	int count;

	for (count = 0; ptr[count] != '\0'; count++)
		;
	return (count);
}
/**
 * binary_to_uint - to convert binary to decimal
 * @b: string
 * Return: decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int mult = 1, size = _strlen(b);

	if (b == NULL)
		return (0);
	while (size--)
	{
		if (b[size] == '1')
			sum += mult;
		else if (b[size] >= 'a' && b[size] <= 'z')
			return (0);
		mult *= 2;
	}

	return (sum);
}
