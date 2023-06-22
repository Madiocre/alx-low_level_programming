#include "main.h"
/**
 * main - Prints '_putchar' in string
 *
 * Return: 0 on success
 */
int main(void)
{
char s[] = "_putchar";
int i = 0;
int len = strlen(s);
for(i = 0; i < len; i++)
{
_putchar(s[i]);
}
_putchar('\n');
 return (0);
}
