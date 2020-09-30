#include "holberton.h"
#include <string.h>

/**
 * _strlen - check the code for Holberton School students.
 * @s: variable.
 *
 *Return: the lenght of the string
 */
int _strlen(char *s)
{
int lenght;
lenght = strlen(s);
return (lenght + 1);
}
