#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints values based on a given format.
 * @format: A string containing the format characters.
 *          'c' for char, 'i' for int, 'f' for float, 's' for string.
 *          Any other character is ignored.
 *          If @format is NULL, the function does nothing.
 * @...: Variadic arguments corresponding to the format characters.
 */
void print_all(const char * const format, ...)
{

	int i;
	char c;
	char *s;

va_list args;
va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (double)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}

	va_end(args);
	printf("\n");
}
