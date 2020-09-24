#include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *@n: variable
 * Return: void .
 */
void print_diagonal(int n)
{
int count, i;
count = 0;
if (n > 0)
{
while (count < n)
{
count++;
i = count;
while (i > 0)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
