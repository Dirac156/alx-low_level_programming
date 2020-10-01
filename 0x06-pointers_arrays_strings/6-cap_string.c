#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *cap_string(char *n)
{
int i = 0;

while (n[i] != '\0')
{
if (n[0] <= 122 && n[0] >= 97)
{
n[0] = n[0] - 32;
}
if (n[i] == 32 || n[i] == 46 || n[i] == '\t' || n[i] == '\n'
|| n[i] == 44 || n[i] == 59 || n[i] == '!' || n[i] == '?'
|| n[i] == '(' || n[i] == ')' || n[i] == '{' || n[i] == '}')
{
if (n[i + 1] <= 122 && n[i + 1] >= 97)
{
n[i + 1] = n[i + 1] - 32;
}
}
i++;
}
return (n);
}
