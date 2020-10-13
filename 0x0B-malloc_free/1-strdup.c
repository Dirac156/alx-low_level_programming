#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *_strdup - main function
  *@str : the car that will have the size
  *Return: character
  */
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
int i = 0;
int len = strlen(str);
char *ss = malloc(len);
if (ss == NULL)
{
return (NULL);
}
else
{
while (ss[i] == '\0' && str[i] != '\0')
{
ss[i] = str[i];
i++;
}
return (ss);
}
}
