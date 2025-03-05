#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies argv1 and 2
 *@argc: The number of command line arguments
 *@argv: An array of strings representing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
