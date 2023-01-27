#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * check_key - Checks a particulatr index array to see if the newly added
 * key already exist
 *
 * @node: Index of array
 * @key: The key to check
 * @value: The value
 *
 * Return: 1 if Success
 * Otherwise 0
 */

int check_key(hash_node_t *node, char *key, char *value)
{
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = value;
			return (1);
		}
		node = node->next;
	}
	return (0);
}

/**
 * hash_table_set - Adds an element to the hash table
 *
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if Success
 * Otherwise: 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;
	char *value_cpy, *key_cpy;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value_cpy = strdup(value);
	key_cpy = strdup(key);
	if (value_cpy == NULL || key_cpy == NULL)
		return (0);

	/*
	 * We check the current array index, if the key we intened to add
	 * is alrready present, instead we update the value
	 */
	if (check_key(ht->array[index], key_cpy, value_cpy) == 1)
	{
		return (1);
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = key_cpy;
	new_node->value = value_cpy;

	/* If theres is collision; Array index has already been used */
	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[index];
	}
	else
	{
		new_node->next = NULL;
	}
	ht->array[index] = new_node;
	return (1);
}
