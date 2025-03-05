#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers
 *@argc: The number of command line arguments
 *@argv: An array of strings representing the command line arguments
 *
 * Return: 0 if successful, 1 if there is an error
 */
int main(int argc, char *argv[])
{
	long sum = 0;
	int j, i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%ld\n", sum);
	return (0);
}
