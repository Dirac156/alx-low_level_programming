#include "holberton.h"
/**
 * print_alphabet_x10 - print_alphabet
 *
 * Return:void
 */
void print_alphabet_x10(void)
{
int count;
for (count = 0; count < 10; count++)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
