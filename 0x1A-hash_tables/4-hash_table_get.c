#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the key,
 *  or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (!ht || !key || *key == '\0')
return (NULL);
index = key_index((unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp)
{
if (strcmp(key, temp->key) == 0)
return (temp->value);
temp = temp->next;
}
return (NULL);
}
