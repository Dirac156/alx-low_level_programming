#include "holberton.h"

/**
 * _strpbrk - function
 * @s : pointer to check if the value is inside
 * @accept : the value to check
 * Return: memory.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s != '\0')
{
i = 0;
while (accept[i] != '\0')
{
if (*s == accept[i])
{
return (s);
}
i++;
}
s++;
}
return (0);
}
