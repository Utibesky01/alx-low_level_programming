#include "lists.h"

/**
 * dlistint_len - finds the number of elements in a dlistint_t list
 * @h: pointer to list's head
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
