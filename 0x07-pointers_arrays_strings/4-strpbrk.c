#include "main.h"
/**
 * _strpbrk - Locates the first occurrence in a string of any byte from a set
 *            of bytes.
 * @s: Pointer to the string.
 * @accept: Pointer to the string of accepted bytes.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
return (&s[i]);
}
}
return (NULL);
}
