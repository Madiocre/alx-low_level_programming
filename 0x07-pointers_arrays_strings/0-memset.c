#include "main.h"
/**
 * _memset - Fills a block of memory with a specified value.
 * @s: A pointer to the start of the memory block.
 * @b: The value to be set in each byte.
 * @n: The number of bytes to be set.
 *
 * Return: A pointer to the memory block after setting its values.
 */
char *_memset(char *s, char b, unsigned int n)
{
 for (unsigned int i = 0; i < n; i++) {
s[i] = b;
}
return (s);
}
