#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <fcntl.h>
/**
  *create_file - A function that create a file
  *@filename: name of the file
  *@text_content : the context of the file
  *Return: 1
  */
int create_file(const char *filename, char *text_content)
{
int fdo, fdw, len;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fdo = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fdo == -1)
return (-1);
fdw = write(fdo, text_content, len);
if (fdw == -1)
return (-1);
return (1);
}
