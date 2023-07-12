#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments 
 *        (including the program name).
 * @argv: An array of strings representing the command-line arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[]) {
int num1;
int num2;
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
int result;
if(argc == 3)
result = num1 * num2;
printf("%d\n", result);
return (0);
}
