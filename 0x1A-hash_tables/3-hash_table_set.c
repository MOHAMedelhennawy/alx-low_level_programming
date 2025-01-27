#include "hash_tables.h"
/**
 * hash_table_set - to adds an element to the hash table.
 * @ht: hash table to add or update the key/value to.
 * @key: key of new item.
 * @value: value of new item.
 * Return: 1 in succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	hash_node_t *new_item;
	hash_node_t **hash_table_array;
	unsigned long int index;

	if (!ht || !key)
		return (0);

	hash_table_array = ht->array;
	index = key_index((unsigned char *)key, ht->size);
	head = hash_table_array[index];
	new_item = creat_new_item(&head, key, value);

	if (!new_item)
		return (0);

	return (1);
}

hash_node_t *creat_new_item(
	hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_item = (hash_node_t *)malloc(sizeof(hash_node_t));
	hash_node_t *ptr = *head;

	if (!new_item)
		return (NULL);

	new_item->key = (char *) key;
	new_item->value = (char *) value;
	new_item->next = NULL;

	if (*head == NULL)
		*head = new_item;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new_item;
	}

	return (new_item);
}
