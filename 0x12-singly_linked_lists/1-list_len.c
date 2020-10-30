#include "lists.h"
/**
  * print_list - a function that print all strings from a structure
  *@h : the head of the struct
  *Return: the length of the string
  */

size_t list_len(const list_t *h)
{
size_t i = 0;
const list_t *ptr;
ptr = h;
while (ptr != NULL)
{
ptr = ptr->next;
i++;
}
return (i);
}
