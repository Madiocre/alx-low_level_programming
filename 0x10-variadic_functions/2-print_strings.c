#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 * @...: Variable number of strings to be printed.
 *
 * Description: This function prints a variable number of strings, separated by
 * the specified separator. a string is NULL, it will be printed as "(nil)".
 * A new line is printed at the end of the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vars;
	unsigned int i;
	const char *str;

	va_start(vars, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(vars, const char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(vars);

	printf("\n");
}
