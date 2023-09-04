#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string,
 *         or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup_str;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	strcpy(dup_str, str);
	return (dup_str);
}
