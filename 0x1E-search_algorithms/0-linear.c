#include "search_algos.h"

/**
 *linear_search - search algorithm
 *@array: the array of all element.
 *@size: the size of the array.
 *@value: the item.
 *Return: the item.
 */

int linear_search(int *array, size_t size, int value)
{
int i = 0;

if (array == NULL)
return (-1);

while ((size_t) i < size)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
i++;
}
return (-1);
}
