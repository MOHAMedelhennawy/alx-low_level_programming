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
	unsigned long int i;
	hash_table_t *my_table;

	/*Creates a HashTaple from struct*/
	my_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (my_table == NULL)
		return (NULL);


	my_table->size = size;
	/*Creates a array of size of type hash_node_t*/
	my_table->array = (hash_node_t **)calloc(size, sizeof(hash_node_t *));
	if (my_table->array == NULL)
	return (NULL);

	/*initialization all array by NULL*/
	for (i = 0; i < size; i++)
		my_table->array[i] = NULL;

	return (my_table);
}
