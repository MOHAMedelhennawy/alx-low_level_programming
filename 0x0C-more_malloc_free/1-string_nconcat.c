#include <stdlib.h>
/**
 * string_nconcat- concatenate 2 strings, the size of 2nd string is defined.
 * @s1: string 1.
 * @s2: string 2, concatenated to 1
 * @n: size of s2 concatenated
 * Return: pointer to the concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int k = 0;
	unsigned int i, len = 0;
	char *ptr;

	while (s1[len])
		len++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(ptr + i) = *(s1 + i);

	for (i = len; i < (n + len); i++, k++)
		*(ptr + i) = *(s2 + k);

	*(ptr + i) = '\0';
	return (ptr);
}
