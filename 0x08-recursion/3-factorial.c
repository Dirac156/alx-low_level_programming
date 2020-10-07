#include "holberton.h"
#include <string.h>

/**
 * factorial - check the code for Holberton School students.
 *@n : parameter
 *Return: lenfth of s
 */

int factorial(int n)
{
if (n == 0)
{
return (1);
}
else if (n < 0)
{
return (-1);
}
else
{
return (n * factorial(n - 1));
}
return (0);
}
