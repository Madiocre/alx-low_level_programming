#include <stdio.h>
/**
 * main - Prints alphabet lowercase
 *
 * Return: 0 on success
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
