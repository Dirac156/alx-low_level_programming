#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry point
 * Return:1
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
setenv("ShellVar", ch, 1);
system("echo $ShellVar>&2");
return (1);
}
