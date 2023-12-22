#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *trv, *next_node;
	unsigned long int index = 0;

	if (!ht)
	{
		free (ht);
		return;
	}

	while (index != ht->size)
	{
		if (ht->array[index] != NULL)
		{
			trv = ht->array[index];
			while (trv != NULL)
			{
				next_node = trv->next;
				free(trv->key);
				free(trv->value);
				free(trv);
				trv = next_node;
			}
		}
	}


	free(ht->array);
	free(ht);
}
