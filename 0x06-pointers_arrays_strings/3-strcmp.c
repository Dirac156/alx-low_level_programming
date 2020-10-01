#include "holberton.h"
#include <stdio.h>

/**
 * _strcmp - check the code for Holberton School students.
 *@s1 : variable
 *@s2 : variable
 * Return: Concatinated string.
 */

int _strcmp(char *s1, char *s2)
{
int i;
int ii;
for (i = 0; s1[i] != '\0'; i++)
{
continue;
}
for (ii = 0; s2[ii] != '\0'; ii++)
{
continue;
}
if (i == ii)
{
return (0);
}
else if (i > ii)
{
return (15);
}
else if (i < ii)
{
return (-15);
}
return (0);
}
