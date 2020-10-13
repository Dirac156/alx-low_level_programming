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
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **ret = malloc(sizeof(int *) * height);
int a;
for (a = 0; a < height; a++)
{
ret[a] = malloc(sizeof(int) * width);
}
if (ret == NULL)
{
return (NULL);
}
else
{
return (ret);
}
}
