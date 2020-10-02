#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 *@dest : variable
 *@src : variable
 *@n : the integer
 * Return: Concatinated string.
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0' && i < n; ++i)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
