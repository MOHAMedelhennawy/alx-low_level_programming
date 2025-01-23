#include "lists.h"
/**
 * add_nodeint - Adding node at the beginning.
 * @head: pointer to a head of nodes.
 * @n: member to fail the node.
 * Return: Address of first node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp;

	if (!head)
		return (NULL);

	tmp = (listint_t *)malloc(sizeof(listint_t));

	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}

	tmp->n = n;
	tmp->next = *head;
	*head = tmp;

	return (*head);
}
