#include <stdio.h>
#include "holberton.h"

/**
 * main - print_alphabet
 *
 * Return:void
 */
 void print_alphabet(void)
 {
   int x;
   for (x = 'a'; x <= 'z'; x++)
   {
   _putchar(x);
   }
   _putchar('\n');
 }

 /**
  * main - Entry point
  *
  * Return:void
  */
 int main(void)
 {
   print_alphabet();
 }
