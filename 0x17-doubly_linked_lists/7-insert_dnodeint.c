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

	new_node = malloc(sizeof(*h));
	if (new_node == NULL || h == NULL)
		return (NULL);

	while (ptr)
	{
		ptr = ptr->next;
		siz++;
	}

	if (idx == 0)
		new_node = add_dnodeint(h, n);

	else if (idx == siz)
		new_node = add_dnodeint_end(h, n);

	else
	{
		new_node->n = n;
		if (idx > siz)
			return (NULL);

		while ((idx--) - 1)
		{
			slow = slow->next;
			fast = slow->next;
		}

		new_node->next = fast;
		new_node->prev = slow;
		fast->prev = new_node;
		slow->next = new_node;
	}

	return (new_node);
}
