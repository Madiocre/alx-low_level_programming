#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 *
 * Return: The converted number, or 0 if
 *         there is an invalid character or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;
	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
        	if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[i] - '0');
	}

	return (result);
	
}
