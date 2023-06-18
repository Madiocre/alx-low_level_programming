#include <stdio.h>
/**
 * main - Prints reverse Alphabet
 *
 * Return: 0 on success
 */
int main(void)
{
int i = 25;
while (i >= 0)
{
putchar(i + 'a');
i--;
}
putchar('\n');
return (0);
}
