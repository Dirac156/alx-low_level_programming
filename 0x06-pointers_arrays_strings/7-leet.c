#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * leet - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *leet(char *n)
{
int i;
int a;
char b[11] = "aAeEoOtTlL";
char c[11] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (a = 0; a <= 9; a++)
{
if (b[a] == n[i])
{
n[i] = c[a];
}
}
}
return (n);
}
