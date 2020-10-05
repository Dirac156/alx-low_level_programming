#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - check the code for Holberton School students.
 *@size : variable
 *@a : variable
 */

void print_diagsums(int *a, int size)
{

int i, j;
int sum1 = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j <size; j++)
{
if (i == j)
{
sum1 = sum1 + a[j];
}
}
}
printf("%d\n", sum1);
}
