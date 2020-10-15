#include "holberton.h"
/**
  *array_range- check if malloc library is assigning memories
  *@min: variable
  *@max: parameter 2
  *Return: integer
  */

int *array_range(int min, int max)
{
int i = 0, t;
int *ptr;
if (min > max)
{
return (NULL);
}
ptr = malloc(sizeof(int) * (max - min));
if (ptr == NULL)
{
return (NULL);
}
t = min;
while (i < max - min)
{
ptr[i] = t;
t++;
i++;
}
return (ptr);
}
