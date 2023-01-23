#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to list's head
 * @n: new node's data
 *
 * Return: the address of new element, else, NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *ptr = *head;

	if (!temp)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;

	if (!ptr)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
		temp->prev = ptr;
	}

	return (temp);
}

