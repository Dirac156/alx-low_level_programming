#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *free_grid - main function
  *@grid : parameter 1
  *@height : parameter 2
  */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
