#imclude "main.h"
#include <stdlib.h>
/**
 * leet - Encodes a string using the Leet (1337) substitution cipher.
 * @str: The input string to be encoded.
 *
 * Return: A dynamically allocated string containing the encoded version of @str.
 *         It is the caller's responsibility to free the memory.
 */
char *leet(char *str)
{
int length = strlen(str);
char *encoded = (char *)malloc((length + 1) * sizeof(char));
for (int i = 0; i <= length; i++)
{
encoded[i] = str[i];
if ((str[i] == 'a' || str[i] == 'A') && (encoded[i] = '4'))
continue;
if ((str[i] == 'e' || str[i] == 'E') && (encoded[i] = '3'))
continue;
if ((str[i] == 'o' || str[i] == 'O') && (encoded[i] = '0'))
continue;
if ((str[i] == 't' || str[i] == 'T') && (encoded[i] = '7'))
continue;
if ((str[i] == 'l' || str[i] == 'L') && (encoded[i] = '1'))
continue;
}
return (encoded);
}
