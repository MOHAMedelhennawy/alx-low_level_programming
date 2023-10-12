#include "lists.h"
/**
 * print_dlistint - to print element
 *@h: header of list
 * Return: the size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t siz = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		siz++;
	}
	return (siz);
}
