#include "holberton.h"
#include "string.h"

/**
 * *_strcpy - main function
 * @dest: parameter
 * @src: parameter
 *Return: destination
 */
char *_strcpy(char *dest, char *src)
{
int b;

for (b = 0; src[b]; b++)
{
dest[b] = src[b];
}
dest[b] = src[b];
return (dest);
}
