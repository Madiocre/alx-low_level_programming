#include <stdio.h>
/**
 * main - Prints a all possible combinations of single-digit numbers
 *
 * Return: 0 on success
 */
int main(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{   
for (k = j + 1; k <= 9; k++)
{
putchar(i + '0');
putchar(',');
putchar(' ');
putchar(j + '0');
putchar(',');
putchar(' ');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return(0);
}
