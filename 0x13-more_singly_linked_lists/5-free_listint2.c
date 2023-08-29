#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	current = *head;
	while (current != NULL)
	{
		current = next;
		next = next->next;
		free(current);
	}
	current = NULL;
}
