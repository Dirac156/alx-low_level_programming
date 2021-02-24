#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the area being looked at
 * @b: the byte filling memory
 * @n: the amount of memory being filled
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