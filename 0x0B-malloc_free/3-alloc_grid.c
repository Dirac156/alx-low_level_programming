#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *alloc_grid - main function
  *@width : parameter 1
  *@height : parameter 2
  *Return: character
  */
int **alloc_grid(int width, int height)
{
int **ret = malloc(sizeof(int **));
int i, j;
if ((width <= 0) || (height <= 0) || (ret == NULL))
{
printf("I am here o error\n");
return (NULL);
}
else
{
printf("I am here normal\n");
for (i = 0; i < width; i++)
{
printf("i : %d\n", i);
printf("I am here loop 1\n");
for (j = 0; j < height; j++)
{
printf("j : %d\n", j);
printf("I am here loop 2\n");
// ret[i][j] = 0;
}
}
}
return (ret);
}
