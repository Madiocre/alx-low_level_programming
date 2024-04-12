#include "search_algos.h"

/**
 * min - gets the min value
 *
 * Return: the lower of both values
 */

int min(int a, int b){
	if(b>a)
		return a;
	else
		return b;
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
	do
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i = min(b, (int)size);

		prev = b;
		b += (int)sqrt(size);
		if (prev >= (int)size)
			return (-1);
		
	}
	while (array[min(b, size)-1] < value);
	prev -= (int)sqrt(size);
	if (prev < 0)
		prev = 0;
	printf("Value found between indexes [%d] and [%d]\n", prev, i);
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += 1;
		if ((int)prev == min(b, size))
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}