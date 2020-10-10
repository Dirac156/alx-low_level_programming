#include <stdio.h>
#include "holberton.h"

/**
  *main - entry
  *@argv : the string from the terminal
  *@argc : the number of arameters
  *Return: 0
  */

int main(int argc, char const *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
