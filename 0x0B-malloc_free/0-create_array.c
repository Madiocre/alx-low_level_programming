#incude "main.h"
/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array elements with.
 *
 * Return: If size is 0, returns NULL. Otherwise,
 *         returns a pointer to the created array,
 *         or NULL if the memory allocation fails.
 */
char *create_array(unsigned int size, char c) {
if (size == 0)
return (NULL);
char *array = malloc((size + 1) * sizeof(char));
if (array == NULL)
return (NULL);
for (unsigned int i = 0; i < size; i++)
array[i] = c;
array[size] = '\0';
return (array);
}
