#include "lists.h"
/**
 * free_list - free nodes memory from heap
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *next;
	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
