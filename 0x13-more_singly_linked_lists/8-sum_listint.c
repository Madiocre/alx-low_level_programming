#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data(n).
 * @head: A pointer to the head of the list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data (n).
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum;

	if (head == NULL)
		return (0);

	current = head;
	sum = 0;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
