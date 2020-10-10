#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
#include <ctype.h>
/**
  *main - entry
  *@argv : the string from the terminal
  *@argc : the number of arameters
  *Return: 0
  */

int main(int argc, char const *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (-1);
}
if (atoi(argv[1]) >= 0)
{
int c = 0;
checker(atoi(argv[1]), c);
}
else if (atoi(argv[1]) < 0)
{
printf("0\n");
}
return (0);
}


void checker (int c, int b)
{
if (c >= 25)
{
b += 1;
if (c - 25 == 0)
{
printf("%d\n", b);
}
else
{
checker(c - 25, b);
}
}
else if (c >= 10)
{
b += 1;
if (c - 10 == 0)
{
printf("%d\n", b);
}
else
{
checker(c - 10, b);
}
}
else if (c >= 5)
{
b += 1;
if (c - 5 == 0)
{
printf("%d\n", b);
}
else
{
checker(c - 5, b);
}
}
else if (c >= 2)
{
b += 1;
if (c - 2 == 0)
{
printf("%d\n", b);
}
else
{
checker(c - 2, b);
}
}
else if (c >= 1)
{
b += 1;
if (c - 1 == 0)
{
printf("%d\n", b);
}
else
{
checker(c - 1, b);
}
}
}
