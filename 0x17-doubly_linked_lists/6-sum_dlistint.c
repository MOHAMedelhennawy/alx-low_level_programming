#include "lists.h"
/**
 * sum_dlistint - to Sum all data(n).
 * @head: head of linked list.
 * Return: Sum of all data(n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
