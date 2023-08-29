#include "lists.h"
/**
 * sum_listint - get sum
 * @head: pointer to fist node
 * Return: sum of member n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
