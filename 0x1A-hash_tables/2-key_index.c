#include "hash_tables.h"
/**
 * key_index - calculates the index at which a key/
 * value pair should be stored in a hash table
 * @key: the key for which to calculate the index
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index;

index = hash_djb2(key) % size;
return (index);
}
