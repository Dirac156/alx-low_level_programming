#include "holberton.h"

#include <string.h>
/**
 * isPalRec - check the code for Holberton School students.
 *@str : parameter
 *@s : variable
 *@e : variable
 *Return: lenfth of s
 */

int isPalRec(char str[], int s, int e)
{

if (s == e)
return (1);
if (str[s] != str[e])
{
return (0);
}
if (s < e + 1)
{
return (isPalRec(str, s + 1, e - 1));
}
return (1);
}

/**
 * is_palindrome - check the code for Holberton School students.
 *@s : variable
 *Return: lenfth of s
 */

int is_palindrome(char *s)
{
int n = strlen(s);
if (n == 0)
{
return (1);
}
return (isPalRec(s, 0, n - 1));
}
