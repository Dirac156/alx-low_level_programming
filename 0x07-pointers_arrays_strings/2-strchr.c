#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - function
 * @s : pointer to check if the value is inside
 * @c : the value to check
 * Return: memory.
 */
char *_strchr(char *s, char c)
{
int i = 0;
int a = 0;
while (s[a] != '\0')
{
a++;
}
char d[a];
while (s[i] != '\0')
{
if (s[i] == c)
{
int b, c;
b = 0;
c = i;
while (c < a)
{
d[b++] = s[c++];
}
s = d;
return (s);
}
i++;
}
return (0);
}
