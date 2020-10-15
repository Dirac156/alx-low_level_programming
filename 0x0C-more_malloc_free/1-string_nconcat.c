#include "holberton.h"
/**
  *string_nconcat - check if malloc library is assigning memories
  *@s1: variable
  *@s2: parameter 2
  *@n : n charachter
  *Return: integer
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat_str;
unsigned int concat_index = 0, lens2 = 0, lens1 = 0, idx = 0;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (; s2[lens1] != '\0'; lens1++)
;
for (; s2[lens2] != '\0'; lens2++)
;
if (n > lens2)
concat_str = malloc(sizeof(char *) * (lens1 + lens2 + 1));
else
concat_str = malloc(sizeof(char) * (lens1 + n + 1));
if (concat_str == NULL)
return (NULL);
while (s1[concat_index] != '\0')
{
concat_str[concat_index] = s1[concat_index];
concat_index++;
}
if (lens2 <= n)
{
while (s2[idx] != '\0')
{
concat_str[concat_index++] = s2[idx];
idx++;
}
}
else
{
while (idx < n && s2[idx] != '\0')
{
concat_str[concat_index] = s2[idx++];
concat_index++;
}
}
concat_str[concat_index] = '\0';
return (concat_str);
}
