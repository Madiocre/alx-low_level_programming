#include "main.h"

/**
 * is_prime_helper - Helper function to perform the recursive primality check.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int prime_helper(int n, int divisor)
{
	if (divisor >= n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (prime_helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
