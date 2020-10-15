#include "holberton.h"
/**
  *string_nconcat - check if malloc library is assigning memories
  *@s1: variable
  *@S2 : parameter 2
  *@n : n charachter
  *Return: integer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int concat_index = 0, len = 0, lens2 = 0, lens1 = 0;
unsigned int idx = 0;

if (s1 == NULL)
	s1 = "";

if (s2 == NULL)
	s2 = "";


for (; s2[lens1] != '\0';lens1++)
  ;

for (; s2[lens2] != '\0';lens2++)
  ;

len = lens1 + lens2;

concat_str = malloc(sizeof(char) * len);

if (concat_str == NULL)
  return (NULL);

if (lens2 <=n)
{
while (s1[concat_index] != '\0')
{
concat_str[concat_index] = s1[concat_index];
concat_index++;
}
while (s2[idx] != '\0')
{
concat_str[concat_index++] = s2[idx];
idx++;
}
}
else
{
while (s1[concat_index] != '\0')
{
concat_str[concat_index] = s1[concat_index];
concat_index++;
}
while (idx < n && s2[idx] != '\0')
{
concat_str[concat_index] = s2[idx];
idx++;
concat_index++;
}
}
concat_str[idx] = '\0';
return (concat_str);
}
