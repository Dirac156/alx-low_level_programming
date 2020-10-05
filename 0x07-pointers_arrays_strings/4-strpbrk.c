#include "holberton.h"
#include <string.h>
/**
 * _strpbrk - function
 * @s : pointer to check if the value is inside
 * @accept : the value to check
 * Return: memory.
 */
char *_strpbrk(char *s, char *accept)
{
s += strcspn(s, accept);
return (*s ? (char *)s : 0);
}
