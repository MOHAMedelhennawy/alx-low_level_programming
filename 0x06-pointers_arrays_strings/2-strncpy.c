#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
	int i = -1;

	while (++i < n && src[i] != '\0')
		dest[i] = src[i];
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
