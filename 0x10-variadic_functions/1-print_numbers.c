#include "variadic_functions.h"
/**
  *print_numbers - print number passed as parameters
  *@n: number of parameters
  *@separator: the character that separate the number
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
/* initialize the program */
va_list valist;
int integer = 0;
unsigned int i;
/* initialize the va_list */
va_start(valist, n);
for (i = 0; i < n; i++)
{
integer = va_arg(valist, int);
printf("%d", integer);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(valist);
}
