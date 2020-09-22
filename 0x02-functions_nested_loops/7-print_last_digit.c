#include "holberton.h"
/**
 * print_last_digit- print_alphabet
 *@x : the character
 * Return: 0 or 1
 */
int print_last_digit(int x)
{
int result;

if (x >= 0)
{
result = x % 10;
}
else
{
result = (x % 10) * -1;
}
_putchar(result + '0');
return (result);
}
