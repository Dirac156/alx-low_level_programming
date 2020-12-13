#include "lists.h"

/**
  *sum_dlistint - the sum of all integers
  *@head: the head of list.
  *Return: the sum.
  */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tm = head;
if (!head)
return (0);
while (tm)
{
sum += tm->n;
tm = tm->next;
}
return (sum);
}
