#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file to copy from.
 * @file_to: The destination file to copy to.
 *
 * This function reads the contents of the file `file_from` and writes
 * it to the file `file_to`. If the destination file exists, it is
 * truncated. The function handles errors related to file reading,
 * writing, and opening by printing an error message to STDERR and
 * exiting with a corresponding exit status.
 *
 * Return: This function does not return a value. It exits with the
 * appropriate exit code upon failure.
 */
int copy_file(const char *file_from, char *file_to)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_writen;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	else
	{
		dprintf(STDERR_FILENO, "File %s opened successfuly for wrting\n", file_to);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		exit(99); }
	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_writen = write(fd_to, buffer, bytes_read);
		if (bytes_writen == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99); }
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98); }
	close(fd_from);
	close(fd_to);
	return (0);
}
/**
 * main - Entry point for the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments passed to the program.
 *
 * The program expects two arguments, a source file and a destination file.
 * If the number of arguments is incorrect, it prints a usage message to STDERR
 * and exits with code 97. Otherwise, it calls the `copy_file` function to copy
 * the contents of the source file to the destination file.
 *
 * Return: Returns 97 if incorrect arguments are passed, 98 if there's an error
 * reading from the source file, 99 if there's an error writing to the
 *destination file.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	return (0);
}
