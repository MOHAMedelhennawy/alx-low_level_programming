#include "lists.h"
/**
 * add_dnodeint - to add not at beginning.
 * @head: head of linked list.
 * @n: Value of the element.
 * Return: New address.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
		ptr->prev = new_node;
		new_node->next = ptr;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
	}

	return (new_node);

}
