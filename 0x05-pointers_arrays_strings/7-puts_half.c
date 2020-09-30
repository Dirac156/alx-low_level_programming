#include "holberton.h"
#include <string.h>

/**
 * puts_half - check the code for Holberton School students.
 * @str: variable.
 */
void puts_half(char *str)
{
int i;
int a;
for (a = 0; str[a] != '\0'; a++)
{
continue;
}
i = 0;
while (i < a/2)
{
_putchar(str[i + a/2]);
i++;
}
_putchar('\n');
}
