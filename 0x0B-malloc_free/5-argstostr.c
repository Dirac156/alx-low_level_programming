#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *argstostr - main function
  *@ac : parameter 1
  *@av : parameter 2
  *Return: return
  */
char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
{
return (NULL);
}
char *s = malloc((ac) * sizeof(char) + 1);
if (s == NULL)
{
return (NULL);
}
int i;
for (i = 0; i < ac; i++)
{
int y = 0;
while (av[i][y] != ' ')
{
s[y] = av[i][y];
y++;
}
s[y] = '\n';
}
return (s);
}
