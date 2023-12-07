#include "lists.h"
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
	dlistint_t *current = *head, *next;

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (index > 1 && current)
	{
		current = current->next;
		index--;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	next = current->next;
	current->next = next->next;

	if (current->next)
		current->next->prev = current;

	free(next);
	return (1);
}
