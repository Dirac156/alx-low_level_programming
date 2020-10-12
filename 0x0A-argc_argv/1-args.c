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
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
