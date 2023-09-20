#include "main.h"
void arg(char *env[], char* command)
{
	int i = 0;
	char *var, *valu, command2[50], *cpy;
	path *head;
    strcpy(command2, "/");
    strcat(command2, command);
        while (env[i])
        {
                cpy = strdup(env[i]);
				var = strtok(cpy, "=");
				if (strcmp(var, "PATH") == 0)
				{
					valu = strtok(NULL, "\0");
					break;
				}
				free(cpy);
				i++;
        }
		printf("%s\n", valu);

        head = token(valu);
        _strcat(head, command2);
}
