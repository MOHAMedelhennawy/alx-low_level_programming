#include "lists.h"
/**
 * listint_len - Traversing linked list and get the size.
 * @h: pointer to first node.
 * Return: size of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (!ptr)
		return (0);

	while (ptr)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
