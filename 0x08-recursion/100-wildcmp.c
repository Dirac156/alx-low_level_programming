#include "holberton.h"
#include <string.h>

/**
 * _puts_recursion - check the code for Holberton School students.
 *@s : parameter
 */

int wildcmp(char *s1, char *s2)
{
char s[1] = "*";
if (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2 && s2 != s)
{
return (0);
}
else
{
wildcmp(s1 + 1, s2 + 1);
}
}
return (1);
}
