#include <stdio.h>
/**
 *makeItSo - return the string in normal order
 * @str : first argument
 */

void makeItSo(char *str)
{
if (*str == '\0')
{
return;
}
makeItSo(str + 1);
putchar(*str);
}
/**
 * main - Entry point
 *
 * Return:1
 */
int main(void)
{
makeItSo("\nnotrebloH");
return (0);
}
