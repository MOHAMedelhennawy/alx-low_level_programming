#include "lists.h"
/**
 * free_listint - destroy nodes.
 * @head: point the first node.
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
	free(head);
}
