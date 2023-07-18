#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog with the given values.
 * @d: Pointer to the struct dog variable to initialize.
 * @name: Pointer to a character string representing
 *        the name of the dog.
 * @age: Float value representing the age of the dog.
 * @owner: Pointer to a character string representing
 *         the owner of the dog.
 *
 * Return: None (void).
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
