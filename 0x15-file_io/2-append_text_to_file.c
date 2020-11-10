#include "holberton.h"
/**
  *append_text_to_file - append some text to a file
  *@filename: name of the file
  *@text_content : the context of the file
  *Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
int fdo, fdw, len;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fdo = open(filename, O_WRONLY | O_CREAT | O_APPEND);
if (fdo == -1)
return (-1);
fdw = write(fdo, text_content, len);
if (fdw == -1)
return (-1);
return (1);
}
