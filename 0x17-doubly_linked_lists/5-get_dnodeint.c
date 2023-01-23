#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a dlistint_t linked list
 * @head: double pointer to list's head
 * @index: index of the node, starting from 0
 *
 * Return: the nth node, else, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}
	if (index)
		return (NULL);

	return (head);
}
