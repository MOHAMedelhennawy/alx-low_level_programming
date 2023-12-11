#include "main.h"

/**
 * _isupper - tests whether the case of a character.
 * @c: character to be checked.
 * Return: 1 if the character is an upper case.
 * 0 if the character is not an upper case.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
