#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 *@size : variable
 *@a : variable
 */

void print_diagsums(int *a, int size)
{
int d = *a;
printf("%d\n", *a);
printf("%d\n", size);

int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j <size; j++)
{
printf("%d\n", d);
}
}
}
