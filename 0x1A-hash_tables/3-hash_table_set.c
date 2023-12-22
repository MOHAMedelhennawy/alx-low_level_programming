#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_item, *current_item;

    if (!ht)
        return (0);

    new_item = creat_new_item(key, value);
    if (strcmp(key, "") || !ht || !new_item)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
    {
        ht->array[index] = new_item;
        return (1);
    }

    current_item = ht->array[index];
	if (strcmp(current_item->key, key) == 0)
	{
		current_item->value = strdup(value);
		if (current_item->value == NULL)
			return (0);
		free(new_item->key);
		free(new_item->value);
		free(new_item);
		return (1);
    }
	new_item->next = current_item;
	ht->array[index] = new_item;
	return (1);

    }

hash_node_t *creat_new_item(const char *key, const char *value)
{
    hash_node_t *new_item;

    new_item = (hash_node_t *) malloc(sizeof(hash_node_t));
    if (new_item == NULL)
        return NULL;

    new_item->key = (char *) (malloc(sizeof(key) + 1));
    new_item->key = strdup(key);
    if (new_item->key == NULL)
    {
        free(new_item);   
        return (NULL);
    }
    new_item->value = (char *) (malloc(sizeof(value) + 1));
    new_item->value = strdup(value);
    if (new_item->value == NULL)
    {
        free(new_item);
        free(new_item->key);
        return (NULL);
    }
    new_item->next = NULL;
 
    return (new_item);
}