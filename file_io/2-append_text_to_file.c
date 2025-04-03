#include <stdio.h>
#include <stdlib.h>
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

	while (*s++)
	{
		lenght++;
	}
	return (lenght);
}
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         -1 if the file does not exist or if the user lacks write
 *permissions.
 *         1 if text_content is NULL but the file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writetext;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
