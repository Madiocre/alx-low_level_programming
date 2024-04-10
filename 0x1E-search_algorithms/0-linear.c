#include "search_algos.h"

/**
 * linear_search - Searching algoritm
 * @array: array to be searched
 * @size: size of said array
 * @value: value we are searching for
 *
 * Return: The first index at which the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (array[i]);
	}
	return (-1);
}
