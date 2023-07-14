#include "main.h"
/**
 * string_nconcat - Concatenates two strings up to a specified length.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of characters from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n) {
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

size_t s1_len = strlen(s1);
size_t s2_len = strlen(s2);

if (n >= s2_len)
n = s2_len;

char *result = malloc((s1_len + n + 1) * sizeof(char));
if (result == NULL)
return (NULL);

strncpy(result, s1, s1_len);
strncpy(result + s1_len, s2, n);
result[s1_len + n] = '\0';

return (result);
}
