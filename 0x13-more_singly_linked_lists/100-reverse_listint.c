#include "lists.h"
/**
 * reverse_listint - Reverse all list
 * @head: pointer to fist node
 * Return: Head Pointer
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (*head)
    {
        next = (*head)->next;
        (*head)->next = prev;
        prev = *head;
        *head = next;
    }

    *head = prev;

    return (*head);
}
