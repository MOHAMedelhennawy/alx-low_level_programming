#include "main.h"

/**
 * main - check the code
 *
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
