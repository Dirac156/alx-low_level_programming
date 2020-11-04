#include "lists.h"
/**
  *get_nodeint_at_index - function that return an index of node
  *@head: the head of the linked list
  *@index: the index we want to remove
  *Return: the node from the index
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *tm;

if (!head)
return (0);
else
{
if (index == 0)
return (head);
i++;
tm = head->next;
while (tm)
{
if (index == i)
return (tm);
tm = tm->next;
i++;
}
}
return (NULL);
}
