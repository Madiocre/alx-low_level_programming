#include "main.h"
/**
 * malloc_checked - Allocates memory and performs error checking.
 * @b: The number of bytes to allocate.
 *
 * Return: On success, a pointer to the allocated memory.
 *         On failure, the function terminates the program 
 *         with exit status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}

return ptr;
}
