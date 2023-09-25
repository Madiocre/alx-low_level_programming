#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 *               linked list, and returns
 * the head node's data (n).
 * @head: A double pointer to the head of the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - the head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}
