#include <string.h>
/**
 * check - check if a string is a palindrome.
 * @start: original string
 * @left: to point to start of string
 * @right: to point to end of string
 * Return: 1 if is palindrome otherwise 0.
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
/**
 * is_palindrome - check if the string is a palindrome ex ala.
 * @s: original string
 *
 *
 * Return: 1 if is alindrome otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 1 || len == 0)
		return (1);

	else
		return (check(s, 0, len - 1));
}
