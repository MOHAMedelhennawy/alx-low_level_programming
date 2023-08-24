#include "lists.h"
/**
 * list_len - to count the number of nodes
 * @h: pointer to the list address
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
