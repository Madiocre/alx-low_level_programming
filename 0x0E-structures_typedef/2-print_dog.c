#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: A pointer to the dog struct to be printed
 *
 * Description: This function prints the name, age, and breed of a dog.
 *              If any field is NULL, it prints (nil) instead of the field value.
 *              If `d` is NULL, nothing is printed.
 */
void print_dog(struct dog *d) {
if (d == NULL) {
return;
}
printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
}
