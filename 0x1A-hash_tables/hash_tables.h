#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct hash_node_s - node of hash table
 * @key: key, stri
 * key is exclusive in HashTable
 * @value: value compatible with key
 * @next: pointer to following node of list
 */
typedef struct hash_node_s
{
	 char *key;
	 char *value;
	 struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash table data struct
 * @size: size of array
 * @array: array of size @size
 * Each cell of array is pointer to first node of linked list,
 * because we want HashTable to use chaining collision handling
 */
typedef struct hash_table_s
{
	 unsigned long int size;
	 hash_node_t **array;
} hash_table_t;

/*functions*/
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - node of arranged hash table
 * @key: key, stri
 * key is exclusive in HashTable
 * @value: value compatible with key
 * @next: pointer to following node of list
 * @sprev: pointer to previous element of sorted linked list
 * @snext: pointer to next element of sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: size of array
 * @array: array of size @size
 * Every cell of array is pointer to first node of linked list,
 * because we want HashTable to use chaining collision handling
 * @shead: pointer to first element of arranged linked list
 * @stail: pointer to last element of arranged linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
#endif /*_HASH_TABLES_H_*/

