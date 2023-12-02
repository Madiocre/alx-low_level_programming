#include "hash_tables.h"
/**
 * create_node - creates a node item
 * @key: key associated with the value
 * @value: the value to be added
 *
 * Return: returns the new element created, NULL if failed
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return (NULL);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;

return (new_node);
}
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

