#include <string.h>
/**
 * s_len - calculates the length of a string.
 * @s: original string
 *
 *
 * Return: length of string.
 */
int check(char *start, int left, int right)
{
	if (left >= right)
		return (1);

	else if (start[left] == start[right])
		return (check(start, left + 1, right - 1));

	else
		return (0);
}
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 1 || len == 0)
		return (1);

	else
		return (check(s, 0, len - 1));
}
