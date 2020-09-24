#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 * Return: void .
 */
void more_numbers(void)
{
int count, i, changer, id;
count = 0;
id = 0;
while (count < 10)
{
i = 0;
for (i = 0; i <= 14; i++)
{
changer = i;
if (i < 10)
{
changer = i;
}
else
{
changer = 1;
}
_putchar(changer + '0');
if (i > 9)
{
_putchar(id + '0');
id++;
}
}

_putchar('\n');
if (i == 15)
{
id = 0;
}
count++;
}
}
