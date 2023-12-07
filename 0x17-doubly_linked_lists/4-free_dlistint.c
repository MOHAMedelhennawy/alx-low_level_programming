#include "lists.h"
void free_dlistint(dlistint_t *head)
{
    dlistint_t *next;

    while (next)
    {
        next = head->next;
        free(head);
        head = next;
    }
}