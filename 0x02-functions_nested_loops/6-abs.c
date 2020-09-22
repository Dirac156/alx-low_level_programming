#include "holberton.h"
/**
 * _abs- print_alphabet
 *@n : the character
 * Return: 0 or 1
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else if (n != 0 && n < 0)
{
return (-n);
}
return (0);
}
