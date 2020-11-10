#include "holberton.h"

/**
 * read_textfile - reads a textfile and prints it to stdout
 * @filename: name of the file
 * @letters: letters to print
 * Return: Null on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, fdr, fdw;
char *buff;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
if (buff == NULL)
return (0);
fdr = read(fd, buff, letters);
if (fdr == -1)
return (0);
fdw = write(STDOUT_FILENO, buff, fdr);
if (fdw != fdr)
return (0);
free(buff);
close(fd);
return (fdw);
}
