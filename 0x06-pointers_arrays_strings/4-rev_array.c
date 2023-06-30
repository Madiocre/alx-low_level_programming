#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array.
 * @n: Number of elements in the array.
 *
 * Description: This function reverses the content of the given array by swapping
 * the elements at the start and end indices iteratively until they meet in the middle.
 */
void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;
while (start < end)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
