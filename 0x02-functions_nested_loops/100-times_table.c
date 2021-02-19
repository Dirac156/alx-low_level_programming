#include "holberton.h"

/**
  *print_times_table - print table.
  *@n : parameter.
  */

void print_times_table(int n)
{
int i, a, result;
if (n < 0 || n > 15)
return;
for (i = 0; i <= n; i++)
{
_putchar('0');
for (a = 1; a <= n; a++)
{
result = i * a;
if (result <= 99)
{
_putchar(' ');
}
if (result <= 9)
{
_putchar(' ');
}
if (result >= 100)
{
_putchar((result / 100) + '0');
_putchar(((result / 10)) % 10 + '0');
}
else if (result <= 99 && result >= 10)
{
_putchar((result / 10) + '0');
}
_putchar((result % 10) + '0');
}
_putchar('\n');
}
}

