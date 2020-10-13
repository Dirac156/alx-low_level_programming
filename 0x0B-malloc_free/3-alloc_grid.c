#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * alloc_grid -  pointer to a 2 dimensional array of integers
 * @width: first parameter
 * @height: second parameter
 *
 * Description:  pointer to a 2 dimensional array of integers
 * Return: Always(0) Success
 */
int **alloc_grid(int width, int height)
{
int **array;
int i;

if (width <= 0 || height <= 0)
{
return (NULL);
}

array = (int **) malloc(height * sizeof(int *));


if (array == NULL)
{
return (NULL);
}

for (i = 0; i < height; i++)
{
array[i] = malloc(width * sizeof(int));
}

if (array != NULL)
{
return (array);
}
else
{
return (NULL);
}
}
