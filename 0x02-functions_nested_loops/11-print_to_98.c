#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98- print_alphabet
 *@n: variable
 * Return: 0 or 1
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
n++;
if (n < 99)
{
printf(", ");
}
else
{
printf("\n");
}
}
}

else if (n >= 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
else
{
printf("\n");
}
n--;

}
}

}
