#include "hash_tables.h"
/**
 * hash_table_set - adds a new key/value pair to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key. key can't be an empty string
 * @value: the value associated with the key. 
 * value must be duplicated. value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node;
hash_node_t *temp;

if (key == NULL || *key == '\0')
return (0);
new_node = create_node(strdup(key), strdup(value));
if (new_node == NULL)
return (0);
index = key_index((unsigned char *)key, ht->size);
temp = ht->array[index];
if (temp == NULL)
ht->array[index] = new_node;
else
{
new_node->next = temp;
ht->array[index] = new_node;
}
return (1);
}