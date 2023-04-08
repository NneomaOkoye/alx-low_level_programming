#include "hash_tables.h"

/**
 * @str: String to hash.
 * hash_djb2 - The Hash function implementing the djb2 algorithm.
 *
 * Return: Calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
