#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 *print_char- a function that prints a character
 *@arg: the charcter
 *Return: Nothing(void)
 */
void print_char(va_list arg)
{
char c;
c = va_arg(arg, int);
printf("%c", c);
}


/**
 *print_int- A function that prints integer
 *@arg: The integer
 *Returns: Nothing(void)
 */
void print_int(va_list arg)
{
int i;
i = va_arg(arg, int);
printf("%i", i);
}


/**
 *print_float- A function that prints a real number
 *@arg: the float number
 *Return: Nothing(void)
 */
void print_float(va_list arg)
{
float f;
f = va_arg(arg, double);
printf("%f", f);
}


/**
 *print_string- A function that prints a string
 *@arg:The string
 *Return: Nothing(void)
 */
void print_string(va_list arg)
{
char *s;
s = va_arg(arg, char *);
if (s == NULL)
{
printf("(nil)");
return;
}
printf("%s", s);
}


/**
 *print_all- A function that prints anything
 *@format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
va_list args;
int i = 0, j = 0;
char *separator = "";
printer_t funcs[] = {
{"c", print_char},
{"i", print_int},
{"f", print_float},
{"s", print_string}
};

va_start(args, format);

while (format && (*(format + i)))
{
j = 0;
while (j < 4 && (*(format + i) != *(funcs[j].symbol)))
j++;

if (j < 4)
{
printf("%s", separator);
funcs[j].print(args);
separator = ", ";
}
i++;
}
printf("\n");
va_end(args);
}
