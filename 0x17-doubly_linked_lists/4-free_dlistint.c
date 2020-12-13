#include "lists.h"

/**
  *free_dlistint - free a dlistint_t.
  *@head: the head of the list.
  */
void free_dlistint(dlistint_t *head)
{
dlistint_t *tm1 = head, *tm2;
if (!head)
return;
while (tm1 != NULL)
{
tm2 = tm1->next;
free(tm1);
tm1 = tm2;
}
}
