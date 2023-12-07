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
	dlistint_t *ptr = *h, *slow = *h, *fast = slow->next, *new_node;
	unsigned int siz = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || h == NULL)
		return (NULL);
	/*to get the size of list*/
	while (ptr)
	{
		ptr = ptr->next;
		siz++;
	}
	/*insert at beginning*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/*insert at End*/
	else if (idx == siz)
		return (add_dnodeint_end(h, n));
	/*check if idx is out of range*/
	if (idx > siz)
		return (NULL);

	while (idx--)
	{
		slow = slow->next;
		fast = slow->next;
	}

	new_node->n = n;
	new_node->next = fast;
	new_node->prev = slow;
	fast->prev = new_node;
	slow->next = new_node;

	return (new_node);
}
