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
size_t count;
size_t len;
size_t i;

count = 0;
while (current != NULL)
{
const char *str = current->str;
len = 0;

if (str != NULL)
{
while (str[len] != '\0')
len++;
}
else
{
str = "(nil)";
len = 5;
}

for (i = 0; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n');

current = current->next;
count++;
}

return (count);
}
