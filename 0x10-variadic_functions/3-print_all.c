#include "variadic_functions.h"
/**
  *print_all - print strings passed as parameters
  *@format: number of parameters
  */
void print_all(const char * const format, ...)
{
va_list valist;
int i = 0;
char *str;
unsigned int integer;
int j = strlen(format);
va_start(valist, format);
while(i < j)
{
if (format[i] == 'c' || format[i] == 's' || format[i] == 'e')
{
str = va_arg(valist, char *);
printf("%s", str);
}
else if (format[i] == 'i' || format[i] == 'f' || format[i] == 'e')
{
integer = va_arg(valist, int);
printf("%d", integer);
}
i++;
}
va_end(valist);
}
