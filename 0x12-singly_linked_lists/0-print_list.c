#include "lists.h"
/**
  * print_list - a function that print all strings from a structure
  *@h : the head of the struct
  *Return: the length of the string
  */

size_t print_list(const list_t *h)
{
size_t i = 0;
while (h)
{
if (h->str != NULL)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
i++;
}
return (i);
}
