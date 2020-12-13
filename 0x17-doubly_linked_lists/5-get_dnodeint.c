#include "lists.h"

/**
  *get_dnodeint_at_index - function that gets node index
  *@head: the head of the node
  *@index: the index of the node
  *Return: the node at the index.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 1;
dlistint_t *node = head->next, *tm;
if (!head)
return (NULL);
if (index == 0)
return (head);
while (node)
{
if (index == i)
return (node);
i++;
tm = node->next;
node = tm;
}
return (NULL);
}
