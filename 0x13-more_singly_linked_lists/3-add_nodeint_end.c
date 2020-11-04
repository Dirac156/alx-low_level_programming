#include "lists.h"

/**
  *add_nodeint_end - The function that add a new node at the end
  *@head: The start of the linked list
  *@n : the integer to add
  *Return: the new node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *tm = *head;
new_node = (listint_t *)malloc(sizeof(listint_t));
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
}
return (new_node);
}
