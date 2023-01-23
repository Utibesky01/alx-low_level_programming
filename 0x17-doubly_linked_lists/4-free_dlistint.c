#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the list's head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = NULL;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
