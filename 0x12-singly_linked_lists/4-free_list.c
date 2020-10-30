#include "lists.h"
/**
  *free_list - main function
  *@head: the head list
  */
void free_list(list_t *head)
{
list_t *ptr;
if (!head)
return;
while (head)
{
ptr = head->next;
if (head->str)
free(head->str);
free(head);
head = ptr;
}
free(ptr);
}
