#include "lists.h"
/**
 * add_dnodeint_end - to insert node at End
 * @head: pointer to first node
 * @n: value of new node
 * Return: head
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *h = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (h->next)
		h = h->next;

	new_node->prev = h;
	h->next = new_node;
	return (new_node);
}
