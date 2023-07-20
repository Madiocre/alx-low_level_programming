#include "function_pointers.h"
/**
 * print_name - Prints a name using a given function
 * @name: The name to be printed
 * @f: Pointer to the function that will be used to print the name
 *
 * This function takes a name and a function pointer as parameters.
 * It calls the function pointed to by `f` and passes the name as an argument.
 * The function pointed to by `f` is responsible for printing the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
