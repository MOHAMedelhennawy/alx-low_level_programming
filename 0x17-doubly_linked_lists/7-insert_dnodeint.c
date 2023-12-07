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
	dlistint_t *ptr = *h, *fast, *slow = *h, *new_node;
	unsigned int siz = 0;

	new_node = malloc(sizeof(ptr));
	if (*h == NULL || new_node == NULL)
		return (NULL);

	while (ptr)
	{
		ptr = ptr->next;
		siz++;
	}

	if (idx == 0)
		add_dnodeint(h, n);

	else if (idx == siz)
		add_dnodeint_end(h, n);

	else
	{
		new_node->n = n;
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
