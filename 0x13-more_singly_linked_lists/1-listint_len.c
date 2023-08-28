#include "lists.h"
/**
 * print_listint - Traversing linked list and get the size.
 * @h: pointer to first node.
 * Return: size of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	const listint_t *ptr = h;

	if (!ptr)
	{
		return (0);
	}

	while (ptr)
	{
		ptr = ptr->next;
		size++;
	}

	return (size);
}
