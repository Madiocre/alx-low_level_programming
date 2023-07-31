#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
const listint_t *current = h;
size_t count;
count = 0;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}

return (count);
}
