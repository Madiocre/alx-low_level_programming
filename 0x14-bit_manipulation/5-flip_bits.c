#include "main.h"

/**
 * flip_bits - Checks how many flips to swap one to another
 * @n: First UL
 * @m: Second UL
 *
 * Return: Number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n^m;
	count = 0;


	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	
	return(count);
}
