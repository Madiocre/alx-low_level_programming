#include <stdio.h>
0;276;0c/**
 * main - Entry point 
 * Return: Always 0 (Success)
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
