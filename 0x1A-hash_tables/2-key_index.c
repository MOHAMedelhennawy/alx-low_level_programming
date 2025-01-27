#include "hash_tables.h"
/**
 * key_index - to return the index of the node
 * @key: the key that will hashing
 * @size: size of array
 * Return: return the index of key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (unsigned long int)(hash_djb2(key) % size);
}
