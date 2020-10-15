#include "holberton.h"
/**
  *malloc_checked - check if malloc library is assigning memories
  *@b: variable
  *Return: integer
  */

void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
