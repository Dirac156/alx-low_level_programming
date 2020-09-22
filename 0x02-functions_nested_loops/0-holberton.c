#include <stdio.h>
#include "holberton.h"
#include "_putchar.c"

/**
 * main - Entry point
 *
 * Return:1
 */
int main(void)
{
char text_printed[] = "Holberton";
int count;

for (count = 0; count < 9; count++)
{
_putchar(text_printed[count]);
}
_putchar('\n');
return (0);
}
