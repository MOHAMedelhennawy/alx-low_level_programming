#include "hash_tables.h"
/**
 * hash_table_get - to retrieves a value associated with a key.
 * @ht: is the hash table to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element,
 *  or NULL if key couldn’t be found.
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *trv;

	if (ht == NULL || strcmp(key, "") == 0 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	trv = ht->array[index];

	while (trv != NULL)
	{
		if (strcmp(key, trv->key) == 0)
			return (trv->value);
		trv = trv->next;
	}

	return (NULL);
}
