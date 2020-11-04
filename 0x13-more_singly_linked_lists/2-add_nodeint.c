#include "lists.h"

/**
  *add_nodeint - The function that add a new node at the beginning
  *@head: The start of the linked list
  *@n : the integer to add
  *Return: the new node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
