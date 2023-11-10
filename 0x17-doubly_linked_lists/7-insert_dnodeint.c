#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t linked list
 * @h: Double pointer to the head of the list
 * @idx: Index of the list where the new node should be added
 * @n: Integer to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed or if it is not possible to add the new node at index idx
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *temp;

if (*h == NULL)
return NULL;

if (idx == 0)
return add_dnodeint(h, n);

temp = *h;
while (temp != NULL)
{
if (count == idx - 1)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return NULL;
new_node->n = n;
new_node->prev = temp;
new_node->next = temp->next;
temp->next = new_node;
if (new_node->next != NULL)
new_node->next->prev = new_node;
return new_node;
}
temp = temp->next;
count++;
}

return NULL;
}
