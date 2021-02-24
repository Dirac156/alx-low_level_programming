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
int *ptr;

if (nmemb == 0 || size == 0)
return (NULL);


ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);

_memset((void *)ptr, 0, size * nmemb);

return (ptr);
}


/**
 * _memset - fills memory with a constant byte
 * @new_ptr: the pointer
 * @c: the char
 * @size: the amount of memory being filled
 * Return: the new memory
 */
char *_memset(char *new_ptr, char c, unsigned int size)
{
char *ptr = new_ptr;

while (size--)
{
*ptr++ = c;
}
return (new_ptr);
}
