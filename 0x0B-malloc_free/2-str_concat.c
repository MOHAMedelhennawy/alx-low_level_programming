#include <stdlib.h>
#include <string.h>
/**
 * str_concat- concatenate 2 strings.
 * @s1: string 1.
 * @s2: string 2, concatenated to 1
 *
 * Return: pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int sum, i = 0;
	sum = strlen(s1) + strlen(s2);
	ptr = (char *)malloc(sum);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (ptr == NULL)
		return (NULL);

	while(*s1)
	{
		*(ptr + i) = *s1;
		s1++;
		i++;
	} 

	while(*s2)
	{
		*(ptr + i) = *s2;
		s2++;
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
