#include "main.h"

char *cap_string(char *s)
{
	int i, j;
	char *a = ",;.!?() {}\"\t\n";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[i] == a[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
			s[i + 1] -= 2;
			}
		}
	}
	return (s);
}
