#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: variable.
 * @b: variable
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
