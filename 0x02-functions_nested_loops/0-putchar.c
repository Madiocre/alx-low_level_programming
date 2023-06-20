#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 *
 * main - Prints '_putchar' in string
 *
 * Return: 0 on success
 */
int main(void)
{
int i = 0;
char s[] = "_putchar";
 for(i = 0; i < (int)strlen(s); i++)
{
_putchar(s[i]);
}
return (0);
}
