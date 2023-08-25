#include "lists.h"
/**
 * _strlen - to get length of a string
 * @s: origin string
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
/**
 * add_node_end - adds a node at the end of a list.
 * @head: head of nodes address
 * @str: pointer to string
 * Return: address of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = new;
	return (new);
}
