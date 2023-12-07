#include "lists.h"
/**
 * free_dlistint - to Free the All list.
 * @head: head of linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;
	while (next)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
