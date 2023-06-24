#include <stdio.h>
#include <math.h>
/**
 * main - print largest prime number
 * Return: (0) on success
 */
int main(void)
{
long int n = 612852475143;
long int largest_prime = 2;

while (n % 2 == 0)
{
n /= 2;
}

for (long int i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
largest_prime = i;
n /= i;
}
}

if (n > 2) 
{
largest_prime = n;
}

printf("%ld\n", largest_prime);
return (0);
}
