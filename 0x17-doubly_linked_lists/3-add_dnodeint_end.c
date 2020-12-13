#include "lists.h"

/**
  *add_dnodeint_end - add node at the end of the list.
  *@head: the head of the list.
  *@n: the integer to add.
  *Return: the new node.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *tm = *head;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->n = n;
if (tm == NULL)
*head = new_node;
else
{
while (tm->next != NULL)
{
tm = tm->next;
}
tm->next = new_node;
new_node->prev = tm;
}
return (new_node);
}
