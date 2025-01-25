#include "lists.h"
/**
 * add_dnodeint_end - to add not at End.
 * @head: head of linked list.
 * @n: Value of the element.
 * Return: New address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *trv = *head;

	tmp = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!head || !tmp)
		return (NULL);

	tmp->n = n;
	tmp->next = NULL;

	if (*head)
	{
		while (trv->next)
			trv = trv->next;
		trv->next = tmp;
		tmp->prev = trv;
	}
	else
	{
		tmp->prev = NULL;
		*head = tmp;
	}

	return (tmp);
}
