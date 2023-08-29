#include "lists.h"
/**
 * get_nodeint_at_index - get address of poistion node
 * @head: pointer to first node
 * @index: the position
 * Return: address of index of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		ptr = ptr->next;
		x++;
	}

	if (x < index)
		return (NULL);

	ptr = head;
	while (index)
	{
		ptr = ptr->next;
		index--;
	}
	return (ptr);
}
