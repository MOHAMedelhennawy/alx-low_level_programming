#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *trv, *tmp;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		trv = ht->array[i];
		while (trv)
		{
			tmp = trv->next;

			free(trv->key);
			free(trv->value);
			free(trv);

			trv = tmp;
		}
	}

	free(ht->array);
	free(ht);
}
