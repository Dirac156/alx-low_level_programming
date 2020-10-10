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
if (argc == 1)
{
printf("0\n");
}
else if (argc == 3)
{
if (isdigit(argv[1]) != 0 && isdigit(argv[2]) != 0)
{
int add;
add = atoi(argv[1]) + atoi(argv[2]);
printf("%d\n", add);
}
else
{
printf("Error\n");
return (-1);
}
}
return (0);
}
