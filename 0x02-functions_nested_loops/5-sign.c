#include "holberton.h"
/**
 * print_sign- print_alphabet
 *@n : the character
 * Return: 0 or 1
 */
int print_sign(int n)
{
if (n == 0)
{
_putchar('0');
return (0);
}
else if (n != 0 && n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
