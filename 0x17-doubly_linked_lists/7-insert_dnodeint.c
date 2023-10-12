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
	dlistint_t *new_node, *ptr = *h, *ptr2;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	while (idx-- > 1 && ptr)
		ptr = ptr->next;

	ptr2 = ptr->next;
	ptr->next = new_node;
	new_node->prev = ptr;
	new_node->next = ptr2;
	ptr2->prev = new_node;
	return (*h);
}
