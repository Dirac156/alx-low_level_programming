#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *string_toupper(char *n)
{
int i;
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 97 && n[i] <= 122)
{
n[i] = n[i] - 32;
}
}
return (n);
}
