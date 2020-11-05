#include "lists.h"
/**
  *reverse_listint - A function that reverse node in the list
  *@head: the head of the linked list
  *Return: the new head
  */
listint_t *reverse_listint(listint_t **head)
{
listint_t *tm, *t;
if (!head || !*head)
return (NULL);
t = (*head)->next;
(*head)->next = NULL;
while (t)
{
tm = *head;
*head = t;
t = (*head)->next;
(*head)->next = tm;
}

return (*head);
}
