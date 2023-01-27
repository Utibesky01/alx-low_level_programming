#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value from an associated key
 *
 * @ht: Hash Table
 * @key: Key to find its value
 *
 * Return: Value associated with the key
 * Othersise: NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	/* Get the index to check */
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
