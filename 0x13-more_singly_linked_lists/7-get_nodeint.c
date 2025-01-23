#include "lists.h"
/**
 * get_nodeint_at_index - get address of poistion node
 * @head: pointer to first node
 * @index: the position
 * Return: address of index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *trv;

	if (!head)
		return (NULL);

	trv = head;
	while (index-- && trv->next)
		trv = trv->next;

	return (trv);
}
