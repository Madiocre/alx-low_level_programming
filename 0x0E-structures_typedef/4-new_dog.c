#include "dog.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * new_dog - Creates a new dog with specified details
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog structure, or NULL if memory allocation fails.
 *
 * Description: This function creates a new dog and initializes its fields with the provided details.
 *              It dynamically allocates memory for the name and owner strings and copies the provided
 *              name and owner values into the newly allocated memory.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);
int name_length = strlen(name) + 1;
new_dog->name = malloc(name_length);
if (new_dog->name == NULL) {
free(new_dog);
return (NULL);
}
strcpy(new_dog->name, name);
int owner_length = strlen(owner) + 1;
new_dog->owner = malloc(owner_length);
if (new_dog->owner == NULL) {
free(new_dog->name);
free(new_dog);
return (NULL);
}
strcpy(new_dog->owner, owner);
new_dog->age = age;
return (new_dog);
}
