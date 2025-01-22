#include "lists.h"
/**
 * _strlen - to get length of a string
 * @str: origin string
 * Return: length of string
 */
unsigned int _strlen(const char *str)
{
	unsigned int count = 0;

	while (*(str++))
		count++;

	return (count);
}

/**
 * add_node_end - adds a node at the end of a list.
 * @head: head of nodes address
 * @str: pointer to string
 * Return: address of node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *ptr;

	tmp = (list_t *)malloc(sizeof(list_t));
	if (!tmp)
		return (NULL);

	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;

	if (!*head)
	{
		*head = tmp;
	} else
	{

		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = tmp;
	}


	return (tmp);
}
