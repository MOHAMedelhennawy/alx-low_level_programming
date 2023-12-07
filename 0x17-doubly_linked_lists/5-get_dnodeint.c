#include "lists.h"
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;

	while (index--)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return NULL;
	}
	return (ptr);
}