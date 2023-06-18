#include <stdio.h>
/**
 * main - Prints the alphabet
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
putchar('\n');
return (0);
}
