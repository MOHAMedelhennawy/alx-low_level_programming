#include "lists.h"
/**
 * sum_dlistint - to get sum of all the data (n)
 * @head: pointer to first node
 * Return: sum of all (n).
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	int sum = 0;

	if (!head)
		return (0);

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
