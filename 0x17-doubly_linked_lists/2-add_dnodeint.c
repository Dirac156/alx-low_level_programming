#include "lists.h"

/**
  *add_dnodeint - add a node at the beginning
  *@head: the head of the node
  *@n : the int to add
  *Return: The new node.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (!new_node || !head)
return (NULL);
if (*head != NULL)
(*head)->prev = new_node;
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
