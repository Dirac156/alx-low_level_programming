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
while (s[i] != '\0')
{
if (s[i] == c)
{
return (s);
}
i++;
}
return NULL;
}
