#include "lists.h"
/**
 * add_dnodeint - to add not at beginning.
 * @head: head of linked list.
 * @n: Value of the element.
 * Return: New address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!head || !tmp)
		return (NULL);

	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;

	if (*head)
		(*head)->prev = tmp;

	*head = tmp;

	return (tmp);
}
