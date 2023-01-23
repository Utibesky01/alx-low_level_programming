#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: double pointer to list's head
 * @idx: index of the new node position, starting from 0
 * @n: new node's data
 *
 * Return: the address of new node, else, NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = NULL;

	if (idx == 0) /* for insert at beg. of list*/
		return (add_dnodeint(h, n));

	while (idx != 0 && temp)
	{
		temp = temp->next;
		idx--;
	}

	if (!temp && !idx) /* for insert at end of list */
		return (add_dnodeint_end(h, n));

	if (idx) /* if index is out of range */
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	temp->prev = new_node;
	new_node->n = n;
	new_node->next = temp;
	return (new_node);
}
