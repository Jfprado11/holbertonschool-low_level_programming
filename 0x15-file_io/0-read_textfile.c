#include "holberton.h"

/**
 *read_textfile - reads a files and prints
 *@filename: the file to be redeable
 *@letters: the amount of letters to be printed and read
 *
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t count1, count2;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	count1 = read(fd, buf, letters);
	if (count1 == -1)
	{
		return (0);
	}
	count2 = write(STDOUT_FILENO, buf, count1);
	if (count2 == -1)
	{
		return (-1);
	}
	free(buf);
	return (count2);
}
