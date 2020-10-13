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
char *ss = malloc(sizeof(s1) + sizeof(s2) - 1);
int i = 0;
while (s1[i] != '\0')
{
if (s1 == NULL)
{
break;
}
else
{
ss[i] = s1[i];
i++;
}
}
int j = 0;
while (s2[j] != '\0')
{
if (s2 == NULL)
{
break;
}
else
{
ss[i] = s2[j];
j++;
i++;
}
}
ss[i] = '\0';
return (ss);
}
