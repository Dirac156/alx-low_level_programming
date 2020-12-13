#include "lists.h"

/**
  *dlistint_len - get the number of nodes
  *@h: the head of the list
  *Return: the number of nodes
  */

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *tmp = h;
size_t i;
for (i = 0; tmp != NULL; i++)
{
tmp = tmp->next;
}
return (i);
}
