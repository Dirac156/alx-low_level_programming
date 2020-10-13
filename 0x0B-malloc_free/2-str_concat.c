#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *str_concat - main function
  *@s1 : parameter 1
  *@s2 : parameter 2
  *Return: character
  */
char *str_concat(char *s1, char *s2)
{
int a = 0, b = 0;
while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
}
char *ss = malloc((a + b) * sizeof(char) + 1);
int i = 0;
if (ss == NULL)
{
return (NULL);
}
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[i] != '\0')
{
ss[i] = s1[i];
i++;
}
int j = 0;
while (s2[j] != '\0')
{
ss[i] = s2[j];
j++;
i++;
}
return (ss);
}
