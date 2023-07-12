#include "main.h"

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments passed to the program.
 * @av: An array of strings representing the arguments.
 *
 * Return: On success, returns a pointer to the concatenated string.
 *         It returns NULL if ac is 0 or av is NULL,
 *         or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
int total_length = 0;
int i, j, k = 0;
char *concat_str;
 
if (ac == 0 || av == NULL)
return NULL;

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
total_length++;
j++;
}
total_length++;
}

concat_str = malloc((total_length + 1) * sizeof(char));
if (concat_str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
concat_str[k] = av[i][j];
j++;
k++;
}
concat_str[k] = '\n';
k++;
}
concat_str[k] = '\0';

return (concat_str);
}
