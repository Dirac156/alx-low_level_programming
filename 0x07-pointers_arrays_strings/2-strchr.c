#include "holberton.h"

/**
 * _strchr - function
 * @s : pointer to check if the value is inside
 * @c : the value to check
 * Return: memory.
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (s + i);
}
return ('\0');
}
