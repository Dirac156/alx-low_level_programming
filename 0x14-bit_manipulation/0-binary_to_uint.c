#include "holberton.h"
/**
  *binary_to_uint - change a binary to decimal number
  *@b: the binary to change
  *Return: the decimal number
  */
unsigned int binary_to_uint(const char *b)
{
int i = 0, time, mult = 1;
unsigned int number = atoi(b);
unsigned int dec = 0, rem;
if (!b)
return (0);
for (; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
i = 0;
while (number != 0)
{
time = 0;
mult = 1;
rem = number % 10;
number = number / 10;
while (time < i)
{
time++;
mult = mult * 2;
}
if (rem != 0)
{
dec += rem *mult;
}
i++;
}
return (dec);
}
