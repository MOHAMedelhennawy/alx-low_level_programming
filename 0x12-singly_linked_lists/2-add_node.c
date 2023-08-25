#include "lists.h"
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*(s + len))
		len++;
	return (len);
}
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	if (!str)
	{
		free(new);
		return (NULL);
	}

	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	new->next = *head;
	*head = new;

	return (new);
}
