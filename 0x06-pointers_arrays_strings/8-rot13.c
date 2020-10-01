#include "holberton.h"
/**
 * rot13 - check the code for Holberton School students.
 *@n : variable
 * Return: return
 */

char *rot13(char *n)
{
int i;
int a;
char b[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char c[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; n[i] != '\0'; i++)
{
for (a = 0; a <= 52; a++)
{
if (b[a] == n[i])
{
n[i] = c[a];
}
}
}
return (n);
}
