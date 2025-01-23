#include "lists.h"
/**
 * free_listint2 - free memory of all list.
 * @head: pointer to head in function
 * Return: Always success.
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr = *head;

	while (ptr && head)
	{
		ptr = ptr->next;
		free(*head);
		*head = ptr;
	}

	free(*head);
}
