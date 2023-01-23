#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to list's head
 * @n: new node's data
 *
 * Return: the address of new element, else, NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head)
	{
		(*head)->prev = temp;
	}
	*head = temp;
	return (temp);
}
