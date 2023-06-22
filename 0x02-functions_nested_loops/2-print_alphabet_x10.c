#include "main.h"
/**
 * print_alphabet_x10 - print 10x
 */
void print_alphabet_x10(void)
{
char s[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0;
int len = strlen(s);
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
}

