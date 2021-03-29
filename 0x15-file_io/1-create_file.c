#include "holberton.h"

int _strlen(char *s);
/**
 *create_file - creating a new file
 *@filename: the name of the new file
 *@text_content: the contente that is going inside of the new file
 *
 *Return: 1 in success. -1 in fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t check;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		check = write(fd, text_content, _strlen(text_content));
		if (check == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 *_strlen - Tells the length or size of a string
 *@s: varible to test the string
 *
 *Return: len the length of the string
 */
int _strlen(char *s)
{
	int lon = 0;

	while (*s != 0)
	{
		s++;
		lon++;
	}
	return (lon);
}
