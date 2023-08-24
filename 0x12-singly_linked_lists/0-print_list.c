#include "lists.h"
/**
 * print_list - to access the data of a node and print them
 * @h: pointer to the list address
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	return (count);
}
