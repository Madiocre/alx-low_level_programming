#include "main.h"
#include <string.h>

/**
 * Checks if a string is a palindrome recursively.
 *
 * @param s The string to check.
 * @param start The starting index for comparison.
 * @param end The ending index for comparison.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 * Checks if a string is a palindrome.
 *
 * @param s The string to check.
 * @return 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
int length = strlen(s);
if (length <= 1)
return (1);
return (is_palindrome_recursive(s, 0, length - 1));
}

