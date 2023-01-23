#include "lists.h"

/**
 * sum_dlistint - sums of all the data (n) of a dlistint_t list
 * @head: pointer to the list's head
 *
 * Return: sum, else, 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
