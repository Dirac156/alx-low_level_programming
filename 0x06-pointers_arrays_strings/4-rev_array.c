#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 *@n : variable
 *@a : variable
 */

void reverse_array(int *a, int n)
{
int i;
int tem;
int b = n;
if (n % 2 == 0)
{
for (i = 0; i < n / 2; i++)
{
tem = a[i];
a[i] = a[b - 1];
a[b - 1] = tem;
b--;
}
}
else if (n % 2 == 1)
{
for (i = 0; i < (n - 1) / 2; i++)
{
tem = a[i];
a[i] = a[b - 1];
a[b - 1] = tem;
b--;
}
}
}
