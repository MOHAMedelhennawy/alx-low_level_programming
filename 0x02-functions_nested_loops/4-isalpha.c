#include "main.h"

/**
 * -isalpha - check the code
 * check if input is char or anything else
 * Return: Always
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
