#include "hash_tables.h"

/**
 * @ht: A pointer to the hash table.
 * @key: The key to get the value of.
 * hash_table_get - the value associated with
 * a key in a hash table should be retrieved.
 *
 * Return: If the key is not matched - NULL.
 * 	otherwise, the value associated with key in ht.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
