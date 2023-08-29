#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int i;

	if (*head == NULL)
		return (0);
	pop = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(pop);
	return (i);
}
