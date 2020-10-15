#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked - check if malloc library is assigning memories
  *@b: variable
  *Return: integer
  */

void *malloc_checked(unsigned int b)
{
void *ptr =  malloc(b);
if (ptr != NULL)
{
return (ptr);
}
}
