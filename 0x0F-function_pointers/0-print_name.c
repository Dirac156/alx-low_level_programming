#include "function_pointers.h"

/**
  *print_name - use the function passed to it to print the print_name
  *@name : The name we want to print
  *@f : the function that will print the print
  */

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);
}
