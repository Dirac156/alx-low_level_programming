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
int a, b;
for (a = 0; s1[a] != '\0'; a++)
{
continue;
}
for (b = 0; s2[b] != '\0'; b++)
{
continue;
}
char *ss = malloc((a + b) * sizeof(char *));
int i = 0;
if (ss == NULL)
{
return (NULL);
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
