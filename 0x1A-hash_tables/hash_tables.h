#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @key: The key, the string used
 * A key is also unique, different from other keys used
 * @next: This is a pointer to the next node of the list
 * struct hash_node_s - A node of a hash table
 * @value: The value corresponding to a key
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * @size: Size of the array
 * @array: Array of sizes
 * Each cell of this array is a pointer to the first node of a linked list.
 * The hash table will be using a chain collision handling
 * struct hash_table_s: Data structure for the hash table
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
}hash_table_t;

int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

/**
 * @key: The key, the string
 * Where the key is unique in the hash table
 * struct shash_node_s - The node of a sorted hash table
 * @value: value corresponding to a key
 * @sprev: A pointer to the previous element of the sorted linked list
 * @next: A pointer to the next node of the list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *value;
	char *key;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * @size: This is the size of the array
 * @array: An array of size
 * Each cell of this array is a pointer to the first node of a linked list.
 * The hash table will be using a chain collision handling
 * struct shash_table_s - Sorted hash table data structure
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);

#endif /* HASH_TABLES_H */
