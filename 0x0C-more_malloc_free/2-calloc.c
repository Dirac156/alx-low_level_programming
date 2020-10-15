#include "holberton.h"
#include <stdlib.h>

/**
  * _calloc - allocate memory
  * @nmemb: parameter 1
  * @size: parameter 2
  * Return: char
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *ptr, i;

if (nmemb == 0 || size == 0)
return (NULL);


ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

while (ptr[i])
{
ptr[i] = 0;
i++;
}
return (ptr);
}
