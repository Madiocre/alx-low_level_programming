#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string to print.
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;

int start_index;

if (len % 2 == 0)
{
start_index = len / 2;
}
else
{
    start_index = (len - 1) / 2 + 1;
}
for (i = start_index; i < len; i++)
putchar(*(str + i));

putchar('\n'); 
}
