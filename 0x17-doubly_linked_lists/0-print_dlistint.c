#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t size = 0;

	if (!h)
		return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);
		size++;
		ptr = ptr->next;
	}

	return (size);
}
