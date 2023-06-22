#include "main.h"
/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
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
