#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a newline.
 * @s: the string to print.
 */
void print_rev(char *s)
{
int len = 0;
int i;

len = _strlen(s);

for (i = len - 1; i >= 0; i--)
putchar(*(s + i));

putchar('\n');
}
