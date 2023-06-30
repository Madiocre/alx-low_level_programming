#include "main.h"
#include <ctype.h>
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize = 1;
while (str[i] != '\0')
{
if (capitalize && islower(str[i]))
str[i] = toupper(str[i]);
capitalize = separator_check(str[i]);
i++;
}
return (str);
}
