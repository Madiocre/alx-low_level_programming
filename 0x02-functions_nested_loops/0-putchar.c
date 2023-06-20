#include <stdio.h>
#include <unistd.h>
/**
 *
 * main - Prints '_putchar' in string
 *
 * Return: 0 on success
 */
int main(void)
{
char s[] = "_putchar";
for(int i = 0; i < strlen(s); i++)
{
_putchar(s[i]);
}
return (0);
}
