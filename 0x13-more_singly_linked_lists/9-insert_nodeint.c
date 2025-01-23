#include "lists.h"
/**
 * insert_nodeint_at_index - insert index at a given position
 * @head: pointer to head pointer
 * @idx: given position to insert
 * @n: value of member n
 * Return: head address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *trv;

	if (!head || !*head)
		return 	(NULL);
	
	trv = *head;
	tmp = (listint_t *)malloc(sizeof(listint_t));
	tmp->n = n;

	if (idx == 0)
	{
		tmp->next = NULL;
		*head = tmp;
		return (tmp);
	}

	while (--idx)
	{
		if (!trv->next)
			return (NULL);
		trv = trv->next;
	}

	tmp->next = trv->next;
	trv->next = tmp;

	return (tmp);
}
