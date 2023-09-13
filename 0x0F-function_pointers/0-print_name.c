#include "function_pointers.h"

/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to the function that will be used to print the name
 *
 * Return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
