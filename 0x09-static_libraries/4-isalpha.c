#include "main.h"
/**
 * _isalpha - Check if a character is an alphabet letter.
 * @c: The character to check.
 *
 * Return: 1 if @c is an alphabet letter, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
