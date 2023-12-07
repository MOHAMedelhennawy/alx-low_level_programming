#include "lists.h"
/**
 * insert_dnodeint_at_index - to insert at index idx.
 * @idx: the required note to insert in.
 * @h: head of linked list.
 * @n: value of n.
 * Return: New item.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new_node, *next;
	unsigned int siz = 0;

	/*create a new node to insert*/
	new_node = malloc(sizeof(dlistint_t));

	/*to get the size of list*/
	while (current)
	{
		current = current->next;
		siz++;
	}
	if (!h || idx > siz || !new_node)
		return (NULL);

	/*insert at beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*insert at End*/
	else if (idx == siz)
		return (add_dnodeint_end(h, n));

	/*insert a node in idx postion*/
	current = *h;
	new_node->n = n;
	while ((idx--) - 1)
		current = current->next;

	next = current->next;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = next;
	next->prev = new_node;

	return (new_node);
}
