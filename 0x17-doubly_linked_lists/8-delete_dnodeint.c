#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;


	while (index--)
		ptr = ptr->next;

	if (*head == NULL || ptr == NULL || head == NULL)
		return (-1);

	if (ptr == *head)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	ptr->next->prev = ptr->prev;
	ptr->prev->next = ptr->next;


	free(ptr);
	return (1);

}
