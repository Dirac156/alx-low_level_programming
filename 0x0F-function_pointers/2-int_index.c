#include "function_pointers.h"

/**
  *int_index - use the function passed to do an action
  *@array : The array that has the value
  *@size : the size of the array
  *@cmp: The function that does something
  *Return: an integer index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0)
return (-1);
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
return (-1);
}
