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
while (i > 1)
{
_putchar(' ');
i--;
}
_putchar('\\');
_putchar('\n');
}
}
else if (n <= 0)
{
_putchar('\n');
}
}
