#include "holberton.h"

int cp_file(char *file_from, char *file_to);
/**
 *main - main function
 *@ac: the number of arguments
 *@av: the arguments
 *Return: 0 in success
 */
int main(int ac, char **av)
{

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(98);
	}
	cp_file(av[1], av[2]);
	return (0);
}

/**
 *cp_file - copy a file_from a copies into file_to
 *@file_from: the first argument file
 *@file_to: the second argument file
 *
 *Return: 1 in success
 */
int cp_file(char *file_from, char *file_to)
{
	int fd, check1, fd2;
	char buffer[1024];

	if ((fd = open(file_from, O_RDONLY)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if ((fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((check1 = read(fd, buffer, 1024)) > 0)
	{
		if (check1 == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(99);
		}
		if (write(fd2, buffer, check1) != check1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (1);
}
