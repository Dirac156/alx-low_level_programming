#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
int i, y;
for (i = 0; i < 10; i++)
{
for (y = 0; y < 10; y++)
{
putchar (i + '0');
putchar (y + '0');
if (i < 10)
{
if (y < 9)
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
