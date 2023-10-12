#include "lists.h"
/**
 * insert_dnodeint_at_index - to insert the node
 * @h: header node
 * @idx: the index
 * @n: n value of new node
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *ptr = *h, *ptr2;
	unsigned int size = 0;
	/*get the length of list*/
	while (ptr->next)
	{
		ptr = ptr->next;
		size++;
	}
	if (h == NULL || *h == NULL || idx > size)
		return (NULL);
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	/*insert node at End*/
	else if (idx == size)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}

	else
	{
		/*create a new node to insert*/
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node || !h)
			return (NULL);
		/*insert a node in idx postion*/
		new_node->n = n;
		ptr = *h;
		while (idx-- > 1 && ptr)
			ptr = ptr->next;
		ptr2 = ptr->next;
		ptr->next = new_node;
		new_node->prev = ptr;
		new_node->next = ptr2;
		ptr2->prev = new_node;
	}
	return (new_node);
}
