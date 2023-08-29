#include "lists.h"
/**
 * free_listint2 - destroy nodes.
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	next = *head;
	while (current != NULL)
	{
		current = next;
		next = next->next;
		free(current);
	}
	current = NULL;
}
