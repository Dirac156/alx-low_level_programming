#include "lists.h"
/**
  *insert_nodeint_at_index - the function that insert a node
  *@head: the head of the linked list
  *@idx: the index where to insert
  *@n: the number to insert
  *Return: The new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *tm, *new_node, *last_node;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (!head)
return (NULL);
else
{
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}
i++;
tm = (*head)->next;
last_node = *head;
while (tm)
{
if (idx == i)
{
new_node->next = tm;
last_node->next = new_node;
return (new_node);
}
last_node = tm;
tm = tm->next;
i++;
}
}
if (idx == i)
{
last_node->next = new_node;
return (new_node);
}
return (NULL);
}
