#include "main.h"
/**
 * clear_bit - change to 0 the bit of a given index.
 * @n: the input number
 * @index: the input index
 * Return: 1 if works if failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index > 63)
		return (-1);

	mask = 1 << index;/*Creating a mask to change the digit*/
	mask = ~mask; /*switch 0 to 1 using 1's complement*/
	*n =  *n & mask;/*Change the bit for 1*/
	return (1);
}
