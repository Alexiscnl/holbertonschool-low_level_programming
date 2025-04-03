#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int lenght = 0;

	while(*s++)
	{
		lenght++;
	}
	return (lenght);
}

/**
 * create_file - Creates a file and writes text into it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Failure occurs if the file cannot be created, written to,
 *         or if write() fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	char writetext;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writetext = write(fd, text_content, _strlen(text_content));
		if (writetext == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
