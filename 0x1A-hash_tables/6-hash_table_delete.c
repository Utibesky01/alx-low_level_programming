#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_delete - Delete a Hash table
 *
 * @ht: hash table to be deleted
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node = NULL;
	hash_node_t *transv = NULL;

	if (ht == NULL)
	{
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				transv = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = transv;
			}
		}
	}
	free(ht->array);
	free(ht);
}
