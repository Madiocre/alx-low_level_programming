#include "function_pointers.h"
/**
 * array_iterator - Executes a function on
 *                  each element of an array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: Pointer to the function to be
 *          executed on each element of the array.
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
}
