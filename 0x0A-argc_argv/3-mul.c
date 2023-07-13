#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: (0) on success, or (1)
 *         if the program does not receive two arguments.
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
int num1,num2,result;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;

printf("%d\n", result);
return (0);
}
