#include "holberton.h"
/**
  *_calloc- check if malloc library is assigning memories
  *@nmemb: variable
  *@size: parameter 2
  *Return: integer
  */


void *_calloc(unsigned int nmemb, unsigned int size)
{
if (size == 0 || nmemb == 0)
return (NULL);
void *ptr = malloc(nmemb * size + 1);
if (ptr == NULL)
return (NULL);
return (ptr);
}
