#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list
 * @head: Double pointer to the head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 0;
dlistint_t *temp, *prev;

if (*head == NULL)
return (-1);

temp = *head;
while (temp != NULL)
{
if (count == index)
{
if (temp->prev != NULL)
temp->prev->next = temp->next;
if (temp->next != NULL)
temp->next->prev = temp->prev;
if (temp == *head)
*head = temp->next;
free(temp);
return (1);
}
prev = temp;
temp = temp->next;
count++;
}

return (-1);
}
