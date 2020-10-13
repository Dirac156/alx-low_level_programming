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
int i, j;
char *ret;

if (str == NULL)
{
return (NULL);
}
j = 0;
while (str[j] != 0)
{
j++;
}
ret = malloc(1 + (j *sizeof(*str)));
if (ret == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < j; i++)
{
ret[i] = str[i];
}
}
return (ret);
}
