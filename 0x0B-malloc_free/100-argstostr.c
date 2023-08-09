#include <stdlib.h>
#include <string.h>
char *argstostr(int ac, char **av)
{  
	char *array;
	int i, j, z = 0, n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			n++;
		}
	}

	array = (char *)malloc(n + ac + 1 *(sizeof(char)));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			array[z] = av[i][j];
			z++;
		}
		array[z] = '\n';
		z++;
	}
	array[z] = '\0';

	return (array);
}
