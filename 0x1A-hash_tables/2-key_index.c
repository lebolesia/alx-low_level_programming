#include "hash_tables.h"

/**
 * key_index - Gather index regarding a key/value
 *      pair must be gathered in array of hash table
 * @key: The key to gather the index of
 * @size: The size of array of hash table
 * Return: The index of key
 * Description: Utilizes djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
