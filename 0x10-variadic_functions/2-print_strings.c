#include "variadic_functions.h"
/**
  *print_strings - print strings passed as parameters
  *@n: number of parameters
  *@separator: the character that separate the number
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
/* initialize the program */
va_list valist;
unsigned int i;
char *str;
/* initialize the va_list */
va_start(valist, n);
for (i = 0; i < n; i++)
{
str = va_arg(valist, char *);
if (str != NULL)
printf("%s", str);
else
printf("(nil)");
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(valist);
}
