#include "holberton.h"
#include <string.h>
#include <stdio.h>

/**
  * _strstr - function
  * @haystack : variable
  * @needle : variable
  * Return: return
  */

void print_chessboard(char (*a)[8])
{
int i, c;
for (i = 0; i < 8; i++)
{
for (c = 0; c < 8; c++)
{
putchar(a[i][c]);
}
putchar('\n');
}
}
