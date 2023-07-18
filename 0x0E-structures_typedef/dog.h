#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog.
 * @name: Pointer to a character string representing the name of the dog.
 * @age: Float value representing the age of the dog.
 * @owner: Pointer to a character string representing the owner of the dog.
 *
 * Description: The `struct dog` structure represents a dog with its name, age,
 *              and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

#endif /* DOG_H */


void init_dog(struct dog *d, char *name, float age, char *owner);
