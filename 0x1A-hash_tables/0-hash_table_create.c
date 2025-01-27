#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - is a function creates a hash table.
 * @size: is the size of the array
 * Return: a pointer to the newly created hash table
 * Or NULL If something went wrong.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (!hash_table)
		return (NULL);

	hash_table->size = size;
	hash_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));

	if (!hash_table->array)
		return (NULL);

	while (size--)
		hash_table->array[size] = NULL;

	return (hash_table);
}
