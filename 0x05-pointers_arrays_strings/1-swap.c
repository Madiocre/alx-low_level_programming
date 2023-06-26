"main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to the first integer to be swapped.
 * @b: pointer to the second integer to be swapped.
 *
 * Return: void (no return)
 */
void swap_int(int *a, int *b)
{
int temp;

temp = *a;   /* Save the value of *a in temp */
*a = *b;     /* Copy the value of *b into *a */
*b = temp;   /* Copy the value of temp into *b */
}
