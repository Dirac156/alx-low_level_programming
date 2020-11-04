#include "lists.h"
/**
  *sum_listint - the sum of all numbers in the linked list
  *@head: The head of the linked list
  *Return: The sum of all numbers in the linked list
  */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tm;

if (!head)
return (0);
else
{
tm = head;
while (tm)
{
sum += tm->n;
tm = tm->next;
}
}
return (sum);
}
