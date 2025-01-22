#include "lists.h"

/**
 * print_list - Print All Nodes
 * @h: pointer to list header
 * Return: The length of the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr)
	{
		if (ptr->str)
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		} else
		{
			printf("[0] (nil)\n");
		}

		ptr = ptr->next;
		count++;
	}

	return (count);
}
