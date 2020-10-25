#include <stdarg.h>
#include "variadic_functions.h"
/**
  *sum_them_all - sum all the parameters
  *@n: number of parameters
  *Return: an integer which is thesum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
/* initialize the program */
va_list valist;
int sum = 0;
unsigned int i;
/* initialize the va_list */
va_start(valist, n);
for (i = 0; i < n; i++)
{
sum += va_arg(valist, int);
}
va_end(valist);
return (sum);
}
