#include "lists.h"
/**
 * add_dnodeint - to insert node at Beginning
 * @head: pointer to first node
 * @n: value of new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h = *head;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->next = *head;
	h->prev = new;
	*head = new;
	return (new);
}
