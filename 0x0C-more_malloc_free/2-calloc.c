#include "holberton.h"
/**
  *_calloc- check if malloc library is assigning memories
  *@nmemb: variable
  *@size: parameter 2
  *Return: integer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int count = 0;
if (size == 0 || nmemb == 0)
{
return (NULL);
}
char *ptr = malloc((sizeof(char) * nmemb * size) + 1);
if (ptr == NULL)
{
return (NULL);
}
while (count < nmemb * size + 1)
{
ptr[count] = 0;
count++;
}
return (ptr);
}
