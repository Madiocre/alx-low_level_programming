#include "main.h"
/**
 * _calloc: Function that works like calloc
 * @nmemb: Used to check validity
 * @size: size of allocation
 *
 * Return: Return: On success, a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
return (NULL);

void *ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

memset(ptr, 0, nmemb * size);

return (ptr);
}
