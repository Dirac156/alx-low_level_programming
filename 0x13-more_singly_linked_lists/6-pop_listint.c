#include "lists.h"
/**
  *pop_listint - remove the head of a linked list
  *@head : the head of a linked list
  *Return: the value in the list
  */
int pop_listint(listint_t **head)
{
int n;
listint_t *t;

if (!*head)
return (0);
else
{
t = *head;
*head = (*head)->next;
n = (t)->n;
free(t);
}
return (n);
}
