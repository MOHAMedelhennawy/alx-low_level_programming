#include "lists.h"
/**
 * reverse_listint - Reverse all list
 * @head: pointer to fist node
 * Return: Head Pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (current);
}
