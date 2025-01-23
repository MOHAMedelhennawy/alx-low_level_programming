#include "lists.h"
/**
 * free_listint2 - free memory of all list.
 * @head: pointer to head in function
 * Return: Always success.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (!head || !*head)
		return;

	current = *head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
