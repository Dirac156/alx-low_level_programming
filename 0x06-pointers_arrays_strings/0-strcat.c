#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 *@dest : variable
 *@src : variable
 * Return: Concatinated string.
 */

char *_strcat(char *dest, char *src)
{
int i, a;
for (i = 0; dest[i] != '\0'; i++)
{
continue;
}
for (a = 0; src[a] != '\0'; a++)
{
dest[i] += src[a];
i++;
}
dest += '\0';
return (dest);
}
