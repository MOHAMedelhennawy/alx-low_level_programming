#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, len = 0, k = 0;
	char *ptr;

	while (s1[len])
		len++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ptr = malloc((len + n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(ptr + i) = *(s1 + i);

	for (i = len; i < n + len && s2[k] != '\0'; i++, k++)
	{
		*(ptr + i) = *(s2 + k);
	}

	*(ptr + i) = '\0';
	return (ptr);
}
