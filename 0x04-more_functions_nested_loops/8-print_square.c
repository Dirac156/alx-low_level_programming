#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *@size: variable
 * Return: Always 0.
 */
void print_square(int size)
{
int count1, count2;
count1 = 0;

if (size > 0)
{
while (count1 < size)
{
count2 = 0;
while (count2 < size)
{
_putchar('#');
count2++;
}
_putchar('\n');
count1++;
}
}
else
{
_putchar('\n');
}
}
