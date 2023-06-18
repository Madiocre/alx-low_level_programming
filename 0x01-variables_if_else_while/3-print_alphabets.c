#include <stdio.h>
/**
 * main - Print alphabets
 *
 * Return: 0 on success
 */
int main(void)
{
int i = 0;
while (i < 26)
{
putchar(i + 'a');
i++;
}
i = 0;
while (i < 26)
{
putchar(i + 'A');
i++;
}
putchar('\n');
return 0;
}
