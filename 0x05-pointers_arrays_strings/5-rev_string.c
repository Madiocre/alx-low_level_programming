#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to reverse.
 */
void rev_string(char *s)
{
int len = 0;
int i;
char temp;

len = strlen(s);

for (i = 0; i < len / 2; i++)
{
temp = *(s + i);
*(s + i) = *(s + len - i - 1);
*(s + len - i - 1) = temp;
}
}
