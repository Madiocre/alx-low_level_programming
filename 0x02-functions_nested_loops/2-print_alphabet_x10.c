#include "main.h"
/**
 * print_alphabet_x10 - print 10x
 */
void print_alphabet_x10(void)
{
char s[] = "abcdefghijklmnopqrstuvwxyz";
int i = 0, j = 0;
int len = strlen(s);
for (i = 0; i < 10; i++)
{
for (j = 0; j < len; j++)
{
_putchar(s[j]);
}
_putchar('\n');
}
}
