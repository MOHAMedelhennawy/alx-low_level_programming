#include "lists.h"
/**
 * get_dnodeint_at_index - to Return node at index.
 * @head: head of linked list.
 * Return: indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (index--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}
	return (ptr);
}
