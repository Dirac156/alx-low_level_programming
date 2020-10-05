#include "holberton.h"

/**
 * _strpbrk - function
 * @s : pointer to check if the value is inside
 * @accept : the value to check
 * Return: memory.
 */
char *_strpbrk(char *s, char *accept)
{
int i = 0;
int a = 0;
if (*s != '\0' && *accept != '\0')
{
while (accept[a] != '\0')
{
while (s[i] != '\0')
{
if (s[i] == accept[a])
{
return (s);
}
i++;
}
a++;
}
return (0);
}
else
{
return (0);
}
}
