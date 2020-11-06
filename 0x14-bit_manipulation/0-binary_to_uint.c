#include "holberton.h"
/**
  *binary_to_uint - change a binary to decimal number
  *@b: the binary to change
  *Return: the decimal number
  */
unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
unsigned int i = 0;
if (!b)
return (0);
for (; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
number = (number << 1) | 1;
else if (b[i] == '0')
number <<= 1;
}

return (number);
}
