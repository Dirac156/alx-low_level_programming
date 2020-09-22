#include <stdio.h>
#include "holberton.h"


/**
 * print_alphabet - print_alphabet
 *
 * Return:void
 */
void print_alphabet()
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
/**
 * main - print_alphabet
 *
 * Return:0
 */

int main(void)
{
print_alphabet();
return (0);
}
