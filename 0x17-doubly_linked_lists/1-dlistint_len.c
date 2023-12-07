#include "lists.h"
/**
 * dlistint_len - to get the size of list.
 * @h: head of linked list.
 * Return: size of list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t size = 0;

	if (!h)
		return (0);

	while (ptr)
	{
		size++;
		ptr = ptr->next;
	}

	return (size);
}
