#include "main.h"
path *token(char *str)
{
	path *head = NULL;
	char *token = strtok(str, ":");
	while (token != NULL)
	{
		creat_list(token, &head);
		token = strtok(NULL, ":");
	}
	
	
	
	return(head);
}
