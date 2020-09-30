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
while (str[i] != '\0')
{
i++;
}

if (i % 2 == 1)
{
a = (i + 1) / 2;
while (str[a] != '\0')
{
_putchar(str[n]);
n++;
}
}

else
{
n = (i / 2);
while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}
}

_putchar('\n');
}
