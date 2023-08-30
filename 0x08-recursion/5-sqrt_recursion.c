#include "main.h"
/**
 * sqrt_helper - Helper function to perform the recursive calculation.
 * @n: The number to calculate the square root of.
 * @start: The starting point for the search.
 * @end: The ending point for the search.
 * Return: The natural square root of the number, or -1.
 */

int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
		return (-1);
	mid = (start + end) / 2;

	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (sqrt_helper(n, start, mid - 1));
	else
		return (sqrt_helper(n, mid + 1, end));
}

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the number, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0, n));
}
