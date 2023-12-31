#include "hash_tables.h"
/**
* hash_table_print - prints the key/value pairs in a hash table
* @ht: the hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;

if (!ht)
return;
printf("{");
for (i = 0; i < ht->size; i++)
{
temp = ht->array[i];
while (temp)
{
printf("'%s': '%s'", temp->key, temp->value);
if (temp->next)
printf(", ");
temp = temp->next;
}
}
printf("}\n");
}
