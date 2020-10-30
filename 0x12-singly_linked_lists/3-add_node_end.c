#include "lists.h"

/**
 *_strlen- Gets the length of a string
 *@s: string
 *
 *Return:Length of a string
 */
int _strlen(const char *s)
{
int length = 0;
while (*s)
{
s++;
length++;
}
return (length);
}

/**
  *add_node_end - add a node at the end of the linked list
  *@head: the head
  *@str: the string to put
  *Return: an element of list_t
  */
list_t *add_node_end(list_t **head, const char *str)
{
int length = _strlen(str);
list_t *new;
list_t *ptr = *head;

if (head == NULL)
return (0);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = length;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = new;
}
return (new);
}
