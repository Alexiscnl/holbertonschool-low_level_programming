#include <stdio.h>
/**
 *main - Prints all arguments it receives, one per line.
 * @argc: The number of command line arguments.
 * @argv: An array of strings representing the command line arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int word = 0;

	for (; word < argc; word++)
	{
		printf("%s\n", argv[word]);
	}
	return (0);
}
