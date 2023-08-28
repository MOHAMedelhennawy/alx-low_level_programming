#include "lists.h"
/**
 * add_nodeint - Adding node at the beginning.
 * @head: pointer to a head of nodes.
 * @n: member to fail the node.
 * Return: Address of first node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
