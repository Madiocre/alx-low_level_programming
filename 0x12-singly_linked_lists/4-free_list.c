#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a list_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Description: This function frees the memory
 *              allocated for each node in the list.
 *              It also frees the memory allocated
 *              for the string in each node.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *temp;

	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
