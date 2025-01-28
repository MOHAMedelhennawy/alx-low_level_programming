#include "hash_tables.h"
/**
 * hash_table_print - to prints a hash table.
 * @ht: is the hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	int count = 0;
	unsigned long int i;
	hash_node_t *trv;

	if (!ht || !ht->array)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		trv = ht->array[i];
		while (trv)
		{
			if (count == 0)
			{
				printf("'%s': '%s'", trv->key, trv->value);
				count++;
			}
			else
				printf(", '%s': '%s'", trv->key, trv->value);
			trv = trv->next;
		}
	}

	printf("}\n");
}
