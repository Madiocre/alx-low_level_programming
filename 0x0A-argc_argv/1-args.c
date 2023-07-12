#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments provided
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int output = argc - 1;
if (argv[0] != NULL)
printf("%d\n", output);
return (0);
}
