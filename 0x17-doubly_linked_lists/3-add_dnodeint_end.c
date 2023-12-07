#include "lists.h"
/**
 * add_dnodeint_end - to add not at End.
 * @head: head of linked list.
 * @n: Value of the element.
 * Return: New address.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr = *head;

	new_node = malloc(sizeof(*head));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
	}


	else
	{
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = new_node;
		new_node->prev = ptr;
		new_node->next = NULL;
		new_node->n = n;
	}

	return (new_node);
}
