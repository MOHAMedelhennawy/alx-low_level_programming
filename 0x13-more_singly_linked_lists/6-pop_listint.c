#include "lists.h"
/**
 * pop_listint - Delete fist node
 * @head: pointer to head
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *ptr;

	if (!head || !*head)
		return (0);

	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;

	free(ptr);
	return (n);
}
