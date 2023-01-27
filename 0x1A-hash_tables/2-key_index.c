#include "hash_tables.h"

/**
 * key_index - computes the index of a key
 * @key: the key as a string
 * @size: size of the array of the hash table
 *
 * Return: the index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int index;

	index = hash_djb2(key) % size;
	return (index);
}
