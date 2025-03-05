#include <stdio.h>
/**
 * main - print number string
 *@argc: The number of command line arguments.
 *@argv: An array of strings representing the command line arguments.
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 1)
	{
	printf ("%d\n", argc - 1);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
