#include "lists.h"

/**
 * list_len - Return no. of nodes in  linked list.
 * @h: A pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */
size_t list_len(const list_t *h)
{
const list_t *current = h;
size_t count;
count = 0;

while (current != NULL)
{
current = current->next;
count++;
}

return (count);
}
