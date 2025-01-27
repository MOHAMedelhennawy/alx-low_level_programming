#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds/updates a key/value pair in the hash table.
 * @ht: Hash table to modify.
 * @key: Key string (must not be empty).
 * @value: Value string to associate with the key.
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **head, *new_item, *current;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	head = &ht->array[index];

	/* Check for existing key */
	current = *head;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			char *new_value = strdup(value);

			if (!new_value)
				return (0);
			free(current->value);
			current->value = new_value;
			return (1);
		}
		current = current->next;
	}

	/* Create and insert new node */
	new_item = create_new_item(key, value);
	if (!new_item)
		return (0);

	insert_at_beg(head, new_item);
	return (1);
}

/**
 * create_new_item - Creates a new hash node with duplicated key/value.
 * @key: Key string to duplicate.
 * @value: Value string to duplicate.
 * Return: New node pointer, or NULL on failure.
 */
hash_node_t *create_new_item(const char *key, const char *value)
{
	hash_node_t *new_item = malloc(sizeof(hash_node_t));

	if (!new_item)
		return (NULL);

	new_item->key = strdup(key);
	if (!new_item->key)
	{
		free(new_item);
		return (NULL);
	}

	new_item->value = strdup(value);
	if (!new_item->value)
	{
		free(new_item->key);
		free(new_item);
		return (NULL);
	}

	new_item->next = NULL;
	return (new_item);
}

/**
 * insert_at_beg - Inserts a node at the beginning of a bucket chain.
 * @head: Pointer to the head pointer of the chain.
 * @node: Node to insert.
 * Return: Always returns the inserted node.
 */
hash_node_t *insert_at_beg(hash_node_t **head, hash_node_t *node)
{
	node->next = *head;
	*head = node;
	return (node);
}

/**
 * hash_table_free - Frees an entire hash table and its elements.
 * @ht: Hash table to free.
 */
void hash_table_free(hash_table_t *ht)
{
	unsigned int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current)
		{
			hash_node_t *temp = current;

			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
