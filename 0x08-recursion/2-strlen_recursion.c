#include "holberton.h"
#include <string.h>

/**
 * _puts_recursion - check the code for Holberton School students.
 *@s : parameter
 */

int _strlen_recursion(char *s)
{
int i = 1;
if (*s != '\0')
{
i +=_strlen_recursion(s + 1);
}
else
{
i--;
}
return i;
}
