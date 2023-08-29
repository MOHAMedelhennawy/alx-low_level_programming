#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *pop;

	if (*head == NULL || head == NULL)
		return (0);
	pop = *head;
	*head = (*head)->next;
	free(pop);
	return ((*head)->n);
}
