#include "lists.h"

/**
  *listint_len - The function return the length of a linked list.
  *@h: The linked list where we will use to print its elements
  *Return: The number of elements in the lined list
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
