#include "lists.h"
int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *h, *prev_node, *next_node;

	h = *head;
	prev_node = *head;
	next_node = *head;
	while (next_node->next != NULL)
	{
		prev_node = next_node;
		next_node = next_node->next;
		i++;
	}

	free(next_node);
	next_node = NULL;
	prev_node->next = NULL;
	return (h->n);
}
