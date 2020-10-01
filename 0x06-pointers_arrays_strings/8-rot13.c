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
int d;
char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char c[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; n[i] != '\0'; i++)
{
d = 1;
for (a = 0; a < 52; a++)
{
if (n[i] == b[a] && d == 1)
{
n[i] = c[a];
d = 0;
}
}
}
return (n);
}
