#include "lists.h"
/**
 * list_len - to count the number of nodes
 * @h: pointer to the list address
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
