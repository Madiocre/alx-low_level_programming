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
int mid, result;
if (start <= end)
{
mid = (start + end) / 2;
if (mid *mid == n)
return (mid);
if (mid *mid < n)
{
result = sqrt_helper(n, mid + 1, end);
if (result != -1)
return (result);
}
else
{
result = sqrt_helper(n, start, mid - 1);
if (result != -1)
return (result);
}
}
return (-1);
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
if (n == 0 || n == 1)
return (n);
return (sqrt_helper(n, 1, n));
}
