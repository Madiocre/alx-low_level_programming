#include "hash_tables.h"
/**
 * create_node - creates a new node with a given key and value
 * @key: the key of the new node
 * @value: the value of the new node
 *
 * Return: a pointer to the new node
 */
hash_node_t *create_node(char *key, char *value)
{
hash_node_t *new_node = malloc(sizeof(hash_node_t));
if (!new_node)
return NULL;
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;
return new_node;
}