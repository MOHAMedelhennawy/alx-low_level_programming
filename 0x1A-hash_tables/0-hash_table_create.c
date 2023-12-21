#include "hash_tables.h"
#include <stdlib.h>
hash_table_t *hash_table_create(unsigned long int size)
{
    int i;

    /*Creates a HashTaple from struct*/
    hash_table_t *my_table = (hash_table_t*)malloc(sizeof(hash_table_t));
    if (my_table == NULL)
        return (NULL);


    my_table->size = size;
    /*Creates a array of size of type hash_node_t*/
    my_table->array = (hash_node_t **)calloc(my_table->size, sizeof(hash_node_t *));
    if (my_table->array == NULL)
    return (NULL);

    for (i = 0; i < size; i++)
        my_table->array[i] = NULL;
    
    return (my_table);
}