#include "lists.h"
/**
  *delete_nodeint_at_index - delete node at an index
  *@head: The head of the linked list
  *@index: index of the linked list
  *Return: 1 for successfull and -1 for faillur
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i = 0;
listint_t *tm;
listint_t *last_node;

if (!*head)
return (-1);
else
{
if (index == 0)
{
tm = *head;
*head = tm->next;
free(tm);
return (1);
}
i++;
tm = (*head)->next;
last_node = *head;
while (tm)
{
if (index == i)
{
last_node->next = tm->next;
free(tm);
return (1);
}
last_node = tm;
tm = tm->next;
i++;
}
}
return (-1);
}
