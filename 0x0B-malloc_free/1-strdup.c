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
int i = 0;
char *ss = malloc(strlen(str) + 1);
if (ss == NULL || str == NULL)
{
return (NULL);
}
else
{
while (ss[i] == '\0')
{
ss[i] = str[i];
i++;
}
return (ss);
}
}
