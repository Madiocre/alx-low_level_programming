#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Frees the memory allocated for a dog object
 * @d: Pointer to the dog object to be freed
 *
 * Return: no Return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d);
	}
}
