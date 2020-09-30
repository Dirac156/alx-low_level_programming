#include "holberton.h"
#include <string.h>

/**
 * _puts - check the code for Holberton School students.
 * @str: variable.
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
