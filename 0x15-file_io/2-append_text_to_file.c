#include "holberton.h"

int _strlen(char *s);
/**
 *append_text_to_file - appends text at the end of a file
 *@filename: the name of the file
 *@text_content: the content to be inputed
 *
 *Return: q in success. -1 in fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, check;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_APPEND | O_WRONLY);
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
