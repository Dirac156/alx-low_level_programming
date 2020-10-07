#include "holberton.h"
#include <string.h>

/**
 * is_prime_number - check the code for Holberton School students.
 *@n : parameter
 *Return: lenfth of s
 */

int is_prime_number(int n)
{
double i = n/2;
if(i == 1)
{
return 1;
}
else
{
if(n % i ==0)
{
return 0;
}
else
{
i = i-1;
is_prime_number(n);
}
}
return (0);
}
