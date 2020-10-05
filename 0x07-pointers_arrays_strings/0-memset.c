#include "holberton.h"

/**
 * _memset - function
 * @s : the address of the memory we want to filled it u
 * @b : the caracter that will fill the memory
 * @n : the number of times we will fill the memory
 * Return: memory.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
