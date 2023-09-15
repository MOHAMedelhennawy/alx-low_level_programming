#include "main.h"
void _strcat(path *head, char *command)
{
	char *str;
	struct path *ptr = head;
	struct stat fileStat;
	char *argVec[] = {NULL, NULL};
	char *envVec[] = {NULL};
	int flag = 0;
	while (ptr->next != NULL)
	{
		strcat(ptr->str, command);
		if (stat(ptr->str, &fileStat) == 0)
		{
			if (fork() == 0)
			{
				argVec[0] = ptr->str;
				if (execve(argVec[0], argVec, envVec) == -1)
                       		{
					perror("Error");
                                	exit(2);
                        	}
			}
			else
			{
				wait(NULL);
				return;
			}
		}
		ptr = ptr->next;
	}
	printf("command not found\n");
	return;
}
