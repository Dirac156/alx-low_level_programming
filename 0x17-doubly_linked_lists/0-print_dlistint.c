#include "lists.h"

/**
  *print_dlistint - print all elements of a doubly linked lists
  *@h: the head of the list
  *Return: the size of the dlists
  */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i;
for (i = 0; tmp != NULL; i++)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
return (i);
}
