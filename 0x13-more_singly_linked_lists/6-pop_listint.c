#include "lists.h"
/**
 * pop_listint - Delete fist node
 * @head: pointer to head
 * Return: the head node’s data (n)
 */
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
