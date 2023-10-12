#include "lists.h"
/**
 * dlistint_len - to print number of elements
 *@h: header of list
 * Return: the size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t siz = 0;

	while (ptr)
	{
		siz++;
		ptr = ptr->next;
	}
	return (siz);
}
