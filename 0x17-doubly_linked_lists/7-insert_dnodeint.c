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
	dlistint_t *ptr = *h, *new_node, *ptr2;
	unsigned int siz = 0;

	/*to get the size of list*/
	while (ptr)
	{
		ptr = ptr->next;
		siz++;
	}
	if (!h || idx > siz)
		return (NULL);

	/*insert at beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*insert at End*/
	else if (idx == siz)
		return (add_dnodeint_end(h, n));
	/*create a new node to insert*/
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		return (new_node);
	}
	/*insert a node in idx postion*/
	ptr = *h;
	new_node->n = n;
	while ((idx--) - 1 && ptr)
		ptr = ptr->next;
	ptr2 = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	ptr2->prev = new_node;

	return (new_node);
}
