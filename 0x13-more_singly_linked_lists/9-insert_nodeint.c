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
	listint_t *prev_node, *next_node, *new_node;
	unsigned int count = 0;

	prev_node = *head;
	next_node = *head;
	if (*head == NULL)
		return (NULL);

	prev_node = *head;
	while (prev_node)
	{
		prev_node = prev_node->next;
		count++;
	}

	new_node = malloc(sizeof(listint_t));
	if (!new_node || idx > count)
		return (NULL);

	prev_node = *headi;
	new_node->n = n;
	while (idx)
	{
		prev_node = next_node;
		next_node = prev_node->next;
		idx--;
	}
	if (count == 0)
		*head = new_node;
	prev_node->next = new_node;
	new_node->next = next_node;
	return (*head);
}
