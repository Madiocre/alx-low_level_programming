#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table
 * @size: the size of the array of the hash table
 *
 * Return: a pointer to the newly created hash table,
 *  or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *new_table;

new_table = malloc(sizeof(hash_table_t));
if (!new_table)
return (NULL);
new_table->array = calloc(size, sizeof(hash_node_t *));
if (!new_table->array)
{
free(new_table);
return (NULL);
}
new_table->size = size;
return (new_table);
}