#include "main.h"
/**
 * _puts_recursion - Prints a string using recursion
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
if (*s == '\0') {
putchar('\n');  // Print newline after the entire string is printed
return;
}
putchar(*s);  // Print the current character
_puts_recursion(s + 1);  // Call the function recursively with the next character
}
