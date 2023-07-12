#include "main.h"
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         It returns NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
size_t len = strlen(str);
char *dup_str

if (str == NULL)
return (NULL);
dup_str= malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
return (NULL);

strcpy(dup_str, str);
return (dup_str);
}
