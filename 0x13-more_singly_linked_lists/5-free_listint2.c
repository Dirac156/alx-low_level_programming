#include "lists.h"
/**
  *free_listint2 - The function that free a memory location
  *@head: the head of the linked list
  */

void free_listint2(listint_t **head)
{
listint_t *tm;
if (!head)
return;
while (*head)
{
tm = (*head)->next;
free(*head);
*head = tm;
}
free(tm);
free(*head);
}
