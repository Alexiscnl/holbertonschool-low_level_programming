#include <stdio.h>
/**
 * main - print fizz fizzbuzz buzz
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;

	for (; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a % 5 == 0)
		{
			if (a == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else if (a % 3 != 0 || a % 5 != 0)
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);
}
