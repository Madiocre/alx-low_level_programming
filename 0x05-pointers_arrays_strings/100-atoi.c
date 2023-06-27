#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to convert.
 *
 * Return: The integer value of the string.
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;

while (*s != '\0')
{
if (*s == ' ' || *s == '\t' || *s == '\n')
{
s++;
continue;
}

if (*s == '-' || *s == '+')
{
if (*s == '-')
sign = -1;
s++;
}

while (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
s++;
}

break;
}

return (num * sign);
}
