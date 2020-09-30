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
if (a % 2 == 0)
{
i = a/2;
while (str[i] != '\n')
{
_putchar(str[i]);
i++;
}
}
else if (a % 2 == 1)
{
i = (a + 1) / 2;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
