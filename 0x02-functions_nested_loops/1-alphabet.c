#include "main.h"
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
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
