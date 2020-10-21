#include "function_pointers.h"

/**
  *array_iterator - use the function passed to do an action
  *@array : The array that has the value
  *@size : the size of the array
  *@action: The function that does something
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
