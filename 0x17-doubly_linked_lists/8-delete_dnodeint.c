#include "lists.h"

/**
  *delete_dnodeint_at_index - function that delete a node.
  *@head: the head of the node.
  *@index: the index to delete.
  *Return: 1 successfull, -1 error.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tm, *prevn;
if (*head == NULL)
return (-1);
if (index == 0)
{
tm = *head;
*head = (*head)->next;
free(tm);
return (1);
}
else
{
tm = (*head)->next;
prevn = *head;
while (tm)
{
if (index == i)
{
prevn->next = tm->next;
(tm->next)->prev = prevn;
free(tm);
return (1);
}
tm = tm->next;
prevn = prevn->next;
i++;
}
}
return (-1);
}
