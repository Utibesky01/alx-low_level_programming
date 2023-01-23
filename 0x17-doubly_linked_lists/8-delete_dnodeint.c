#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 *
 * @head: double pointer to the list's head
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, else, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head;

	if (*head)
	{
		if (!index)
		{
			if ((*head)->next)
			{
				*head = (*head)->next;
				(*head)->prev = NULL;
				free(ptr);
			}
			else
			{
				free(*head);
				*head = NULL;
			}
			return (1);
		}
		while (index && ptr)
		{
			ptr = ptr->next;
			index--;
		}
		if (index)
			return (-1);
		if (!(ptr->next)) /*if last element*/
		{
			ptr->prev->next = NULL;
		}
		else
		{
			ptr->prev->next = ptr->next;
			ptr->next->prev = ptr->prev;
		}
		free(ptr);
		return (1);
	}
	return (-1);
}
