#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string to calculate length of.
 *
 * Return: length of @s.
 */
int _strlen(char *s)
{
int len = 0;

while (*(s + len) != '\0')
len++;

return (len);
}
