#include "holberton.h"
/**
 * _islower- print_alphabet
 *@c : the character
 * Return: 0 or 1
 */
int _islower(int c)
{
if (c >= 65 && c <= 90)
{
return (0);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
