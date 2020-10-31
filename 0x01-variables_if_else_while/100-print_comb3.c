#include <stdio.h>

/**
 * main -  prints all possible different combinations of two digits
 *depending on some conditions
 * Return:0
 */

int main(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
if (y > x)
{
putchar(x + '0');
putchar(y + '0');
if (x != 8 || y != 9)
{
putchar (',');
putchar (' ');
}
}
}
}
putchar('\n');
return (0);
}
