#include "main.h"
#include <string.h>
/**
 * rev_string - prints in reverse a string.
 * @s: tested string
 * Return: always 0.
 */
void rev_string(char *s)
{
	int l, i;
	char *end, *start, tmp;

	l = strlen(s) - 1;
	end = s + l;
	start = s;

	for (i = 0; i < (l + 1) / 2; i++)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;
		start++;
		end--;
	}
}
