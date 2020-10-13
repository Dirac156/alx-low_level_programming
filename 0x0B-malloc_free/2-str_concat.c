#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * getlen - main function
 * @s: variable
 * Return: return
 */


int getlen(char *s)
{
int count = 0;
for (; s[count] != '\0'; count++)
;
return (count);
}

/**
 *str_concat - main function
 * @s1: cariable
 * @s2: variable
 * Return: return
 */

char *str_concat(char *s1, char *s2)
{

int count1 = getlen(s1), count2 = getlen(s2), a;
char *ret = malloc((count1 + count2) * sizeof(char *) + 1);
if (ret == NULL)
	return (NULL);
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
int count = count1 + count2;
for (a = 0; a <= count; a++)
{
if (a < count1)
ret[a] = s1[a];
else if (a <= count)
ret[a] = s2[a - count1];
}
return (ret);
}
