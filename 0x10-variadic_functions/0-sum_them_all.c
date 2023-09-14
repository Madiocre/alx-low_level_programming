#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters.
 *
 * Return: The sum of all the arguments,
 *         or 0 if no size given
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list var;

	if (n == 0)
		return (0);

	va_start(var, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(var, int);

	va_end(var);

	return (sum);
}
