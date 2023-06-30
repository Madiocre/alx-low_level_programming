#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
size_t dest_len = strlen(dest);
size_t i;
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
dest[dest_len + i] = '\0';
}
return dest;
}
