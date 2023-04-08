#include "hash_tables.h"

/**
 * @key: The key to get the index of the hash table
 * key_index - Get the index at which a key/value
 * pair should be stored inan array of a hash table.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
