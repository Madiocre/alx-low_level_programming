#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description' 
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
return 0;
}
