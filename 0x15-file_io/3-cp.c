#include "holberton.h"

void cp_file(char *file_from, char *file_to);
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
	if (av[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
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
void cp_file(char *file_from, char *file_to)
{
	int fd, check1, fd2;
	char buffer[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close(fd);
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((check1 = read(fd, buffer, 1024)) > 0)
	{
		if (check1 == -1)
		{
			close(fd), close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (write(fd2, buffer, check1) != check1)
		{
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
