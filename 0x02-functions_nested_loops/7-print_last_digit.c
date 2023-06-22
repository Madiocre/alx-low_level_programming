#include "main.h"
/**
 * print_last_digit - Print the last digit of a number.
 * @n: The number to print the last digit of.
 *
 * Return: The value of the last digit of @n.
 */
int print_last_digit(int n)
{
int last_digit;
int digit = _abs(n);
last_digit = digit % 10;
_putchar('0' + last_digit);
return last_digit;
}
