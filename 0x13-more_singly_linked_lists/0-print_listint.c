#include "lists.h"
/**
 * print_listint - Traversing and print members.
 * @h: pointer to first node.
 * Return: size of linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (!ptr)
		return (0);

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		count++;
	}

	return (count);
}
