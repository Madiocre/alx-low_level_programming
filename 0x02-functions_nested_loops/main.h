#include <unistd.h>
#include <string.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
void print_putchar(char s[])
{
int i = 0;
int len = strlen(s);
for(i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
/**
 * Print a newline after '_putchar'
 */
}
void print_alphabet(void);
