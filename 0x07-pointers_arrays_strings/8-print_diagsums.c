#include "main.h"

/**
 * print_diagsums - prints the sum of both diagonals
 * @a: the pointer to the double array
 * @size: size of square matrix side
 *
 * Return: No return
 */

void print_diagsums(int *a, int size)
{
	int ltr;
	int rtl;
	int i;

	ltr = 0;
	rtl = 0;
	for(i = 0; i < size; i++)
	{
		ltr += a[i * size + i];
		rtl += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", ltr, rtl);
}
