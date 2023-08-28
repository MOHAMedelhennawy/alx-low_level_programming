#include "lists.h"
/**
 * add_nodeint_end - Adding node at the end.
 * @head: pointer to a head of nodes.
 * @n: member to fail the node.
 * Return: Address of first node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *new_node;

	ptr = *head;
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new_node;
	return (*head);
}
