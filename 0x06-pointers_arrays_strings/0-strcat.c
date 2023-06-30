#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be appended
 * Return: Pointer to the resulting string
 */
char* _strcat(char *dest, const char *src) {
char *ptr = dest;
while (*ptr != '\0') {
ptr++;
}
while (*src != '\0') {
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return dest;
}
