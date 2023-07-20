#include "main.h"

/**
 * _isdigit - tests whether a character is from the digit.
 * @c: character to be checked.
 * Return: 1 if the character is an digit.
 * 0 if the character is not an digit.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
