#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: A pointer to the head
 * @index: The index of the node
 *
 * Return: Null if not exist, otherwise nth node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count;

	current = head;
	count = 0;
	while (current != NULL)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
