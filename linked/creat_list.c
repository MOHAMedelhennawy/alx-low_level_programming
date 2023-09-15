#include "main.h"

void creat_list(char *str,struct path **head)
{
	path *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(path));
	if (new == NULL)
		return;

	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return;
	}
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return;
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	
	ptr->next = new;
	return;
}
