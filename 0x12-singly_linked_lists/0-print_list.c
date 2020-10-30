#include "lists.h"
/**
  * print_list - a function that print all strings from a structure
  *@h : the head of the struct
  *Return: the length of the string
  */

size_t print_list(const list_t *h)
{
size_t i = 0;
const list_t *ptr;
ptr = h;
if (!h)
return (-1);
while (ptr != NULL)
{
if (ptr->str != NULL)
printf("[%d] %s\n", ptr->len, ptr->str);
else
printf("[0] (nil)\n");
ptr = ptr->next;
i++;
}
return (i);
}
