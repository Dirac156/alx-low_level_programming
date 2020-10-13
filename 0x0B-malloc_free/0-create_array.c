#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *create_array - main function
  *@size : the size of the integer
  *@c : the car that will have the size
  *Return: character
  */
char *create_array(unsigned int size, char c)
{
char *s;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
else
{
unsigned int i = 0;
while (s[i] == '\0')
{
s[i] = c;
i++;
}
}
return (s);
}
