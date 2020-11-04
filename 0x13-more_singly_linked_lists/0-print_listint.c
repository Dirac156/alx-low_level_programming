#include "lists.h"

/**
  *print_listint - The function we will use to print all integer.
  *@h: The linked list where we will use to print its elements
  *Return: The number of elements in the lined list
  */

size_t print_listint (const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
