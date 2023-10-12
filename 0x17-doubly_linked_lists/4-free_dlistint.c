#include "lists.h"
/**
 * free_dlistint - to free all nodes in list
 * @head: pointer to first ndoe
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
