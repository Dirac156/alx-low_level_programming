#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - check the code for Holberton School students.
 *@n : variable
 *@n : variable
 */

void reverse_array(int *a, int n)
{
int i;
int tem;
int b = n;
for (i = 0; i < n/2; i++ )
{
tem = a[i];
a[i] = a[b -1];
a[b -1] = tem;
b--;
}
}
