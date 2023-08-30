#include "main.h"

/**
 * wildcmp - compares 2 strings, ignoring *
 *      and treating it as other set or chars.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 1 on success, 0 otherwise.
*/

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
