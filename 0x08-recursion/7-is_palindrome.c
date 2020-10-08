#include "holberton.h"


/**
 * check - compare
 * @i: i
 * @size: size
 * @s: string
 * @add: addition depending if n is odd or even
 * Return: return value
 */
int check(char *s, int i, int size, int add)
{

if (i + add == size  && s[i] == s[size])
{
return (1);
}

else if (s[i] == s[size])
{
return (check(s, i + 1, size - 1, add));
}

return (0);
}


/**
 * is_palindrome - Checks of palindrone
 * @r: string
 * Return: 1 if true and 0 if not
 */

int is_palindrome(char *r)
{

int i, s, add;

i = 0;
add = 0;

s = _strlen_recursion(r);

add = (s % 2 != 0) ? 2 : 1;

return (check(r, i, s - 1, add));
}

/**
 * _strlen_recursion - legth of a string
 * @s: string
 * Return: return legth
 */

int _strlen_recursion(char *s)
{
if (!*s)
{
return (0);
}

else
{
return (1 + _strlen_recursion(s + 1));
}
}
