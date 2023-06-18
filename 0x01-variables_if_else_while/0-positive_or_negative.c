#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and whether it is positive, negative, or zero
 * Return: 0 on success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d ", n);
if (n > 0)
printf("is positive\n");
else if (n < 0)
printf("is negative\n");
else
printf("is zero\n");
return (0);
}
