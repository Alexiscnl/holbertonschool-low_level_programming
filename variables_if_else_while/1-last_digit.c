#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print 2 number random
 *
 *Return: 0
 */

int main(void)
{
	int n;
	int ten_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ten_number = n % 10;

	printf("Last digit of %d ", n);
	printf("is %d ", ten_number);

	if (ten_number > 5)
	{
	printf("and is greater than 5\n");
	}
	else if (ten_number == 0)
	{
	printf("and is 0\n");
	}
	else if (ten_number < 6 && ten_number != 0)
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
