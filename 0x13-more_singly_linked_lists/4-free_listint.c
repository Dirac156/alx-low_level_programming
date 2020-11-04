#include "lists.h"
/**
  *free_listint - The function that free a memory location
  *@head: the head of the linked list
  */

void free_listint(listint_t *head)
{
listint_t *tm;
if (head == NULL)
return;
while (head)
{
tm = head->next;
free(head);
head = tm;
}
free(head);
}
