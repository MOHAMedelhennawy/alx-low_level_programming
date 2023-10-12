#include "lists.h"
/**
 * get_dnodeint_at_index - to access to specific index
 * @head: pointer to first node
 * @index: the index to access node
 * Return: index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (index--)
		ptr = ptr->next;

	return (ptr);
}
