#include "search_algos.h"

/**
 * min_t - gets the min value
 * @a: first int
 * @b: second int
 *
 * Return: the lower of both values
 */

int min_t(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}


/**
 * jump_search - Searching algoritm
 * @array: array to be searched
 * @size: size of said array
 * @value: value we are searching for
 *
 * Return: The first index at which the value is found
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0, prev = 0, b;

	b = sqrt(size);
	if (array == NULL)
		return (-1);
	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = min_t(b, (int)size);

		prev = b;
		b += (int)sqrt(size);
		if (prev >= (int)size)
			break;
	} while (array[min_t(b, size) - 1] < value);
	prev -= (int)sqrt(size);
	if (prev < 0)
		prev = 0;
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if ((int)prev == min_t(b, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}
