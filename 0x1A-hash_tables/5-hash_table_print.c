#include "hash_tables.h"
/**
 * hash_table_print - to prints a hash table.
 * @ht: is the hash table.
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *trv;
	unsigned long int index = 0, flag = 0;

	printf("{");
	while (index != ht->size)
	{
		if (ht->array[index] != NULL)
		{
			trv = ht->array[index];
			while (trv != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", trv->key, trv->value);
				flag = 1;
				trv = trv->next;
			}
		}
		index++;
	}
	printf("}\n");

}
