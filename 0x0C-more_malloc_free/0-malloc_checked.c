#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked - check if malloc library is assigning memories
  *@b: variable
  *Return: integer
  */

void *malloc_checked(unsigned int b)
{
int a = 98;
int *status = &a;
void *ptr =  malloc(b);
if (ptr != NULL)
{
return (ptr);
}
return (status);
}
