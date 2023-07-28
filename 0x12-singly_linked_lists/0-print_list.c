#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t linked list.
 * @h: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
const list_t *current = h;
size_t count = 0;

while (current != NULL)
{
if (current->str != NULL)
{
printf("[%d] %s\n", count, current->str);
}
else
{
printf("[%d] (nil)\n", count);
}

current = current->next;
count++;
}

return (count);
}
