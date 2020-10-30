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
  *add_node - add a node at the bigining of the linked list
  *@head: the head
  *@str: the string to put
  *Return: an element of list_t
  */
list_t *add_node(list_t **head, const char *str)
{
int length = _strlen(str);
list_t *new;

if (head == NULL)
return (0);

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = length;
new->next = *head;
*head = new;

return (new);
}
